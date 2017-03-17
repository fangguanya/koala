
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

struct symbol *new_symbol(string name, int type)
{
  struct symbol *sym = malloc(sizeof(*sym));
  sym->name = name;
  sym->type = type;
  sym->size = type_size[type];
  sym->offset = 0;
  sym->data = null;
  return sym;
}

void free_symbol(struct symbol *sym)
{
  free(sym);
}

struct binder *new_binder(struct symbol *sym)
{
  struct binder *binder = malloc(sizeof(*binder));
  assert(binder);
  binder->symbol = sym;
  HASH_NODE_INIT(&binder->hnode, &binder->symbol->name);
  return binder;
}

void free_binder(struct binder *binder)
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
  struct binder *binder = PARENT_STRUCT(hnode, struct binder, hnode);
  free_binder(binder);
}

void symbol_table_init(struct symbol_table *table)
{
  int failed = hash_table_init(&table->table,
                               binder_hash_fn,
                               binder_equal_fn,
                               binder_free_fn);
  assert(!failed);
  table->current_scope = 0;
}

void symbol_table_fini(struct symbol_table *table)
{
  hash_table_fini(&table->table);
  table->current_scope = 0;
}

int symbol_table_add(struct symbol_table *table, string name, int type)
{
  struct binder *binder;
  struct hash_node *hnode = hash_table_lookup(&table->table, &name);
  if (hnode != null) {
    binder = PARENT_STRUCT(hnode, struct binder, hnode);
    if (binder->scope >= table->current_scope) {
      printf("duplicated symblol,(%d,%d,%s)\n", table->current_scope,
            binder->scope, name.val);
      return -1;
    }
  }

  binder = new_binder(new_symbol(name, type));
  binder->scope = table->current_scope;

  int res = hash_table_insert(&table->table, &binder->hnode);
  if (res) {
    printf("insert symbol error: %s\n", name.val);
    free_binder(binder);
    return -1;
  }

  return 0;
}
