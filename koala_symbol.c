
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "koala_symbol.h"

static int type_size[] = {
  0,                  /* invalid */
  1, 2, 4, 8,         /* unsigned */
  1, 2, 4, 8,         /* signed */
  4, 8,               /* float */
  1,                  /* bool */
  sizeof(char *) + 4, /* string */
  0,
  0,
  0,
  0,
  sizeof(char *)  /* pointer */
};

symbol_t *new_symbol(string name, int type)
{
  symbol_t *sym = malloc(sizeof(*sym));
  sym->name = name;
  sym->type = type;
  sym->size = type_size[type];
  sym->offset = 0;
  sym->data = null;
  return sym;
}

void free_symbol(symbol_t *sym)
{
  free(sym);
}

binder_t *new_binder(symbol_t *sym)
{
  binder_t *binder = malloc(sizeof(*binder));
  assert(binder);
  binder->symbol = sym;
  HASH_NODE_INIT(&binder->hnode, &binder->symbol->name);
  return binder;
}

void free_binder(binder_t *binder)
{
  free_symbol(binder->symbol);
  free(binder);
}

static uint32 binder_hash_fn(void *key)
{
  string *str = (string *)key;
  return nstring_hash(str->val, str->len);
}

static int binder_equal_fn(void *k1, void *k2)
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

static void binder_free_fn(struct hash_node *hnode)
{
  binder_t *binder = PARENT_STRUCT(hnode, binder_t, hnode);
  free_binder(binder);
}

void symbol_table_init(symbol_table_t *table)
{
  int failed = hash_table_init(&table->table,
                               binder_hash_fn,
                               binder_equal_fn,
                               binder_free_fn);
  assert(!failed);
  table->current_scope = 0;
}

void symbol_table_fini(symbol_table_t *table)
{
  hash_table_fini(&table->table);
  table->current_scope = 0;
}

int symbol_table_add(symbol_table_t *table, string name, int type)
{
  binder_t *binder;
  struct hash_node *hnode = hash_table_lookup(&table->table, &name);
  if (hnode != null) {
    binder = PARENT_STRUCT(hnode, binder_t, hnode);
    if (binder->scope >= table->current_scope) {
      error_outf("duplicated symblol,(%d,%d,%s)\n", table->current_scope,
            binder->scope, name.val);
      return -1;
    }
  }

  binder = new_binder(new_symbol(name, type));
  binder->scope = table->current_scope;

  int res = hash_table_insert(&table->table, &binder->hnode);
  if (res) {
    error_outf("insert symbol error: %s\n", name.val);
    free_binder(binder);
    return -1;
  }

  return 0;
}
