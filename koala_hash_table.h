
#ifndef _KOALA_HASH_TABLE_H_
#define _KOALA_HASH_TABLE_H_

#include "koala_hlist.h"
#include "koala_list.h"

BEGIN_DECLS /* 兼容C++编译宏 */

#define HT_LOAD_FACTOR  0.65

struct hash_node {
    struct list_head node;      /* linked list's node */
    struct hlist_node link;     /* conflict list */
    void *key;                  /* hash key */
    uint32 hash_value;          /* hash value */
};

#define HASH_NODE_INIT(hnode, _key) do {    \
    INIT_LIST_HEAD(&(hnode)->node);         \
    INIT_HLIST_NODE(&(hnode)->link);        \
    (hnode)->key = _key;                    \
    (hnode)->hash_value = 0;                \
} while (0)

#define HASH_NODE_UNHASHED(hnode) HLIST_UNHASHED(&(hnode)->link)

typedef uint32 (*ht_hash_fn)(void *key);
typedef int (*ht_equal_fn)(void *key1, void *key2);
typedef void (*ht_free_fn)(struct hash_node *node);

struct hash_table {
    uint32 prime_idx;           /* prime array index, internal used */
    uint32 num_nodes;           /* number of nodes in hash table */
    struct hlist_head *entries; /* conflict list array */
    struct list_head list;      /* inserted order list */
    ht_hash_fn hash_fn;         /* hash function */
    ht_equal_fn equal_fn;       /* equal function */
    ht_free_fn free_fn;         /* free hash node function */
};

/* Create a hash table, which is automatically resized,
 * although this incurs a performance penalty.
 */
struct hash_table *hash_table_new(ht_hash_fn hash_fn,
                                  ht_equal_fn equal_fn,
                                  ht_free_fn free_fn);

/* Free a hash table, includes freeing the hash table structure */
void hash_table_free(struct hash_table *table);

/* initialize a hash table, which is automatically resized,
 * although this incurs a performance penalty.
 */
int hash_table_init(struct hash_table *table,
                    ht_hash_fn hash_fn,
                    ht_equal_fn equal_fn,
                    ht_free_fn free_fn);

/* Finialize a hash table */
void hash_table_fini(struct hash_table *table);

/* lookup a key whether is in the hash table or not */
struct hash_node *hash_table_lookup(struct hash_table *table, void *key);

/* Remove a node from the hash table */
void hash_table_remove(struct hash_table *table, struct hash_node *node);

/* Insert a node to the hash table */
int hash_table_insert(struct hash_table *table, struct hash_node *node);
int hash_table_insert_unique(struct hash_table *table, struct hash_node *node);

/* Get linked list */
struct list_head *hash_table_get_list(struct hash_table *table);

void hash_table_show(struct hash_table *table,
                     void (*show)(struct hlist_node *));

/* Hash Functions: */

/* 2^31 + 2^29 - 2^25 + 2^22 - 2^19 - 2^16 + 1 */
#define GOLDEN_RATIO_PRIME_32 0x9e370001UL
/*  2^63 + 2^61 - 2^57 + 2^54 - 2^51 - 2^18 + 1 */
#define GOLDEN_RATIO_PRIME_64 0x9e37fffffffc0001UL

static inline uint64 hash_64(uint64 val, uint32 bits)
{
	uint64 hash = val;

	/*  Sigh, gcc can't optimise this alone like it does for 32 bits. */
	uint64 n = hash;
	n <<= 18;
	hash -= n;
	n <<= 33;
	hash -= n;
	n <<= 3;
	hash += n;
	n <<= 3;
	hash -= n;
	n <<= 4;
	hash += n;
	n <<= 2;
	hash += n;

	/* High bits are more random, so use them. */
	return hash >> (64 - bits);
}

static inline uint32 hash_32(uint32 val, uint32 bits)
{
	/* On some cpus multiply is faster, on others gcc will do shifts */
	uint32 hash = val * GOLDEN_RATIO_PRIME_32;

	/* High bits are more random, so use them. */
	return hash >> (32 - bits);
}

uint32 nstring_hash(const char *str, uint32 len);
uint32 string_hash(const char *str);

END_DECLS /* 兼容C++编译宏 */

#endif
