#include "koala_hash_table.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct number
{
    struct hash_node hnode;
    uint32 value;
};

struct number number_mem[50000100];
int mem_num_idx;

uint32 number_hash(void *key)
{
    uint32 rt = hash_32(*(uint32 *)key, 32);
    return rt;
}

int number_equal(void *k1, void *k2)
{
    int res = (*(uint32 *)k1 - *(uint32 *)k2 == 0);
    //if (res == 1)
    //{
      //printf("%d-%d\n", *(uint32 *)k1, *(uint32 *)k2);
    //}

    return res;
}

struct number *number_alloc(void)
{
    //return malloc(sizeof(struct number));
    return &number_mem[mem_num_idx++];
}

void number_free(struct hash_node *hnode)
{
    struct number *num = (struct number *)hnode;
    //printf("0x%x\t", num->value);
    //free(num);
}

uint32 idx = 0;
uint32 values[1000000];

void check(uint32 val)
{
  uint32 i = 0;
  for (i = 0; i < idx; i++) {
    if (values[i] == val) {
      printf("%d-%d\n", idx, val);
      assert(0);
    }
  }
  values[idx++] = val;
}

void test_number_hash_table(void)
{
    struct hash_table table;
    struct number *num;
    int failed;
    int i;
    failed = hash_table_init(&table, number_hash, number_equal, number_free);
    assert(!failed);

    srand(time(NULL));

    printf("max:%d\n", RAND_MAX);

    for (i = 0; i < 1000000; i++ )
    {
        num = number_alloc();
        assert(num);
        num->value = rand();
        check(num->value);
        HASH_NODE_INIT(&num->hnode, &num->value);
        failed = hash_table_insert(&table, &num->hnode);
        //assert(!failed);
    }

    hash_table_fini(&table);
}

struct string {
    struct hash_node hnode;
    char *value;
};

uint32 string_hash_fn(void *key)
{
    uint32 rt = string_hash(*(char **)key);
    return rt;
}

int string_equal_fn(void *k1, void *k2)
{
    return strcmp(*(char **)k1, *(char **)k2) ? 0 : 1;
}

int random_string(char *data, int len)
{
    static const char char_set[] = "0123456789abcdefghijklmnopqrstuvwxyz" \
                                   "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    int i;
    int idx;

    for (i = 0; i < len; i++)
    {
        idx = rand() % (NR_ELTS(char_set) - 1);
        data[i] = char_set[idx];
    }

    data[i] = 0;

    return 0;
}

char string_mem[(sizeof(struct string) + 20) * 10000000];
int string_idx;

struct string *string_alloc(int len)
{
    int failed;
    struct string *str = (struct string *)&string_mem[string_idx * (sizeof(struct string) + 20)];   //malloc(sizeof(*str) + len + 1);
    if (!str)
        return NULL;
    HASH_NODE_INIT(&str->hnode, &str->value);
    failed = random_string((char *)(str + 1), len);
    if (failed) {
        //free(str);
        return NULL;
    }

    str->value = (char *)(str + 1);
    string_idx++;
    return str;
}

void string_free(struct hash_node *hnode)
{
    struct string *str = (struct string *)hnode;
    //free(str);
}

void test_string_hash_table(void)
{
    struct string *str;
    int failed;
    struct hash_table string_hash;
    int i;
    struct ht_iterator iter;
    struct hash_node *hnode;

    failed = hash_table_init(&string_hash,
                          string_hash_fn,
                          string_equal_fn,
                          string_free);
    assert(!failed);

    srand(time(NULL));

    for (i = 0; i < 1000000; i++ )
    {
        str = string_alloc(10);
        assert(str);
        failed = hash_table_insert(&string_hash, &str->hnode);
        assert(!failed);
    }

#if 0
    ht_iterator_init(&string_hash, &iter);
    while ((hnode = ht_iterator_next(&iter))) {
        printf("%s\n", ((struct string *)hnode)->value);
    }
#endif

    hash_table_fini(&string_hash);
}

int main()
{
    //test_number_hash_table();
    test_string_hash_table();
    return 0;
}
