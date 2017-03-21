
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "koala_hash_table.h"
#include "koala_string.h"

static struct hash_table string_hash_table;

struct string_hash_node
{
  struct hash_node hnode;
  string val;
};

int string_cache_exist(string *str)
{
  struct string_hash_node *string_node;
  struct hash_node *hnode = hash_table_lookup(&string_hash_table, str);
  if (hnode)
  {
    string_node = PARENT_STRUCT(hnode, struct string_hash_node, hnode);
    *str = string_node->val;
    return 1;
  }
  else
  {
    return 0;
  }
}

void string_cache_add(string str)
{
  struct string_hash_node *string_node = malloc(sizeof(*string_node));
  assert(string_node);
  HASH_NODE_INIT(&string_node->hnode, &string_node->val);
  string_node->val = str;
  hash_table_insert_unique(&string_hash_table, &string_node->hnode);
}

#define STRING_BLOCK_SIZE   1024

struct string_block
{
  struct list_head node;
  int left;
  char *page;
};

static LIST_HEAD(string_block_list);

struct string_block *new_string_block()
{
  struct string_block *block = malloc(sizeof(*block) + STRING_BLOCK_SIZE);
  assert(block);
  INIT_LIST_HEAD(&block->node);
  block->left = STRING_BLOCK_SIZE;
  block->page = (char *)(block + 1);

  LIST_ADD_TAIL(&string_block_list, &block->node);
  return block;
}

static struct string_block *get_avail_block()
{
  struct list_head *tail = LIST_LAST(&string_block_list);
  if (tail != null)
  {
    return PARENT_STRUCT(tail, struct string_block, node);
  }
  else
  {
    return new_string_block();
  }
}

string new_string(char *str)
{
  return new_nstring(str, strlen(str));
}

string new_nstring(char *str, int len)
{
  string string;
  assert(len <= STRING_BLOCK_SIZE);
  string.val = str;
  string.len = len;

  if (string_cache_exist(&string))
  {
    printf("found string:%s\n", string.val);
    return string;
  }

  printf("new string:%s\n", string.val);

  struct string_block *block = get_avail_block();

  printf("block:%p, left:%d\n", block, block->left);

  if (block->left < len + 1)
  {
    block = new_string_block();
  }

  char *data = block->page + STRING_BLOCK_SIZE - block->left;
  block->left -= (len + 1);
  assert(block->left >= 0);

  memcpy(data, str, len);
  data[len] = 0;

  string.val = data;
  string.len = len;
  string_cache_add(string);

  return string;
}

string string_append(string str1, string str2)
{
  char str[str1.len + str2.len + 2];
  memcpy(str, str1.val, str1.len);
  str[str1.len] = '.';
  memcpy(str+str1.len, str2.val, str2.len);
  str[sizeof(str) - 1] = '0';
  return new_nstring(str, sizeof(str) - 1);
}

static uint32 str_hash_fn(void *key)
{
  string *str = (string *)key;
  return nstring_hash(str->val, str->len);
}

static int str_eq_fn(void *k1, void *k2)
{
  string *s1 = (string *)k1;
  string *s2 = (string *)k2;
  int min = MIN(s1->len, s2->len);
  if (strncmp(s1->val, s2->val, min) != 0)
  {
    return 0;
  }

  if (min != s1->len || min != s2->len)
  {
    return 0;
  }

  return 1;
}

static void str_free_fn(struct hash_node *node)
{
  struct string_hash_node *string_node = (struct string_hash_node *)node;
  free(string_node);
}

void init_string_system()
{
  int failed = hash_table_init(&string_hash_table,
                               str_hash_fn, str_eq_fn, str_free_fn);
  assert(!failed);
}
