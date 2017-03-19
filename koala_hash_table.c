
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "koala_hash_table.h"

/* This is a set of good hash table prime numbers, from:
 * http://planetmath.org/GoodHashTablePrimes
 * Each prime is roughly double the previous value, and as far as
 * possible from the nearest powers of two.
 */
static const uint32 good_primes[] =
{
     53,
     97,
     193,
     389,
     769,
     1543,
     3079,
     6151,
     12289,
     24593,
     49157,
     98317,
     196613,
     393241,
     786433,
     1572869,
     3145739,
     6291469,
     12582917,
     25165843,
     50331653,
     100663319,
     201326611,
     402653189,
     805306457,
     1610612741
};

#define GET_PRIME(idx)      good_primes[idx]
#define PRIME_ARRAY_LEN     NR_ELTS(good_primes)

#define HASH_TABLE_NR_SLOTS(table)    GET_PRIME((table)->prime_idx)

static uint32 __get_proper_prime(struct hash_table *table)
{
    uint32 new_prime_idx = table->prime_idx;

    while (new_prime_idx < PRIME_ARRAY_LEN &&
           table->num_nodes >= GET_PRIME(new_prime_idx) * HT_LOAD_FACTOR)
        ++new_prime_idx;

    if (new_prime_idx > PRIME_ARRAY_LEN)
        new_prime_idx = PRIME_ARRAY_LEN - 1;

    return new_prime_idx;
}

static struct hlist_head *__new_entries(uint32 num_entries)
{
    struct hlist_head *entries;
    int i;

    entries = malloc(sizeof(*entries) * num_entries);
    if (!entries)
        return null;

    for (i = 0; i < num_entries; i++)
        INIT_HLIST_HEAD(entries + i);

    return entries;
}

static void __free_entries(struct hlist_head *entries)
{
    if (entries) free(entries);
}

static int __hash_table_init(struct hash_table *table,
                             uint32 prime_idx,
                             ht_hash_fn hash_fn,
                             ht_equal_fn equal_fn,
                             ht_free_fn free_fn)
{
    struct hlist_head *entries;
    uint32 num_entries;

    num_entries = GET_PRIME(prime_idx);
    entries = __new_entries(num_entries);
    if (!entries)
        return -1;

    table->prime_idx    = prime_idx;
    table->num_nodes    = 0;
    table->entries      = entries;
    table->hash_fn      = hash_fn;
    table->equal_fn     = equal_fn;
    table->free_fn      = free_fn;

    INIT_LIST_HEAD(&table->list);

    return 0;
}

int hash_table_init(struct hash_table *table,
                    ht_hash_fn hash_fn,
                    ht_equal_fn equal_fn,
                    ht_free_fn free_fn)
{
    return __hash_table_init(table, 0, hash_fn, equal_fn, free_fn);
}

struct hash_table *hash_table_new(ht_hash_fn hash_fn,
                                  ht_equal_fn equal_fn,
                                  ht_free_fn free_fn)
{
    struct hash_table *table = malloc(sizeof(*table));
    if (!table)
        return null;

    if (__hash_table_init(table, 0, hash_fn, equal_fn, free_fn)) {
        free(table);
        return null;
    }

    return table;
}

void hash_table_fini(struct hash_table *table)
{
    struct list_head *var;
    struct list_head *nxt;
    struct hlist_node *hnode;

    LIST_FOR_EACH_SAFE(var, nxt, &table->list) {
        LIST_DEL(var);
        hnode = &PARENT_STRUCT(var, struct hash_node, node)->link;
        HLIST_REMOVE(hnode);
        if (table->free_fn) table->free_fn((struct hash_node *)var);
    }

    __free_entries(table->entries);
    table->entries   = null;
    table->prime_idx = 0;
    table->num_nodes = 0;
}

void hash_table_free(struct hash_table *table)
{
    hash_table_fini(table);
    free(table);
}

static struct hash_node *__hash_table_lookup(struct hash_table *table,
                                             void *key,
                                             uint32 hash_value)
{
    uint32 idx = hash_value % HASH_TABLE_NR_SLOTS(table);
    struct hlist_node *var;
    struct hash_node *hnode;

    HLIST_FOR_EACH(var, table->entries + idx) {
        hnode = PARENT_STRUCT(var, struct hash_node, link);
        if (table->equal_fn(hnode->key, key))
            return hnode;
    }

    return null;
}

struct hash_node *hash_table_lookup(struct hash_table *table, void *key)
{
    return __hash_table_lookup(table, key, table->hash_fn(key));
}

void hash_table_remove(struct hash_table *table, struct hash_node *node)
{
    if (HASH_NODE_UNHASHED(node))
        return;

    if (!hash_table_lookup(table, node->key))
        return;

    LIST_DEL(&node->node);
    HLIST_REMOVE(&node->link);
    --table->num_nodes;
}

static int __hash_table_insert(struct hash_table *table,
                               struct hash_node *node,
                               int option);

static void __hash_table_expand(struct hash_table *table, uint32 new_prime_idx)
{
    struct hash_table new_table;
    struct list_head *var;
    struct list_head *nxt;
    struct hlist_node *hnode;
    int res;

    if (__hash_table_init(&new_table,
                          new_prime_idx,
                          table->hash_fn,
                          table->equal_fn,
                          table->free_fn))
        return;

    LIST_FOR_EACH_SAFE(var, nxt, &table->list) {
        LIST_DEL(var);
        hnode = &PARENT_STRUCT(var, struct hash_node, node)->link;
        HLIST_REMOVE(hnode);
        res = __hash_table_insert(&new_table, (struct hash_node *)var, 0);
        assert(!res);
    }

    __free_entries(table->entries);
    table->prime_idx = new_table.prime_idx;
    table->entries   = new_table.entries;
}

static void __hash_table_maybe_expand(struct hash_table *table)
{
    uint32 new_prime_idx;

    if (table->prime_idx >= PRIME_ARRAY_LEN)
        return;

    if (table->num_nodes < HASH_TABLE_NR_SLOTS(table) * HT_LOAD_FACTOR)
        return;

    new_prime_idx = __get_proper_prime(table);
    if (new_prime_idx <= table->prime_idx)
        return;

    __hash_table_expand(table, new_prime_idx);
}

static int __hash_table_insert(struct hash_table *table,
                               struct hash_node *node,
                               int option)
{
    uint32 idx;

    if (!HASH_NODE_UNHASHED(node))
        return -1;

    if (option & 1)
        node->hash_value = table->hash_fn(node->key);

    if ((option & 2) &&
        __hash_table_lookup(table, node->key, node->hash_value))
        return -1;

    __hash_table_maybe_expand(table);

    idx = node->hash_value % HASH_TABLE_NR_SLOTS(table);

    HLIST_ADD(table->entries + idx, &node->link);
    ++table->num_nodes;
    LIST_ADD_TAIL(&table->list, &node->node);

    return 0;
}

int hash_table_insert(struct hash_table *table, struct hash_node *node)
{
    return __hash_table_insert(table, node, 1);
}

int hash_table_insert_unique(struct hash_table *table, struct hash_node *node)
{
    return __hash_table_insert(table, node, 3);
}

struct list_head *hash_table_get_list(struct hash_table *table)
{
    return &table->list;
}

void hash_table_show(struct hash_table *table,
                     void (*show)(struct hlist_node *))
{
    int i;
    int nr_slots = HASH_TABLE_NR_SLOTS(table);
    struct hlist_node *var;

    for (i = 0; i < nr_slots; i++)
    {
        printf("[%d]:\t", i);
        HLIST_FOR_EACH(var, table->entries + i)
        {
            if (show != null) show(var);
            else printf("%p\t", var);
        }
        printf("\n");
    }
}

/* BKDR */
uint32 string_hash(const char *str)
{
    uint32 seed = 131; /* 31, 131, 1313, 13131, 131313, etc */
    uint32 val = 0;

    while (*str) {
        val = val * seed + (*str++);
    }

    return val;
}

uint32 nstring_hash(const char *str, uint32 len)
{
    uint32 seed = 131; /* 31, 131, 1313, 13131, 131313, etc */
    uint32 val = 0;

    while ((*str) && (len)) {
        val = val * seed + (*str++);
        --len;
    }

    return val;
}
