
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "koala_symbol_table.h"

struct symbol_table symbol_table;

void koala_symbol_table_init()
{
    symbol_table_init(&symbol_table);
}

struct symbol *new_symbol(char *name, int type, void *value)
{
  struct symbol *sym = malloc(sizeof(*sym));
  sym->name = name;
  sym->type = type;
  sym->value = value;
  INIT_LIST_HEAD(&sym->node);
  HASH_NODE_INIT(&sym->hnode, sym->name);
  return sym;
}

static uint32 sym_hash(void *key)
{
  return string_hash((char *)key);
}

static int sym_equal(void *k1, void *k2)
{
  return strcmp((char *)k1, (char *)k2) == 0;
}

static void sym_free(struct hash_node *hnode)
{
  struct symbol *sym = PARENT_STRUCT(hnode, struct symbol, hnode);
  free(sym);
}

void symbol_table_init(struct symbol_table *sym_tbl)
{
  int failed = hash_table_init(&sym_tbl->table, sym_hash, sym_equal, sym_free);
  assert(!failed);
  INIT_LIST_HEAD(&sym_tbl->list);
}

void symbol_table_fini(struct symbol_table *sym_tbl)
{
  hash_table_fini(&sym_tbl->table);
  INIT_LIST_HEAD(&sym_tbl->list);
}

void symbol_table_add(struct symbol_table *sym_tbl, struct symbol *sym)
{
  int res = hash_table_insert(&sym_tbl->table, &sym->hnode);
  if (res) {
    printf("duplication symbol: %s\n", sym->name);
    return;
  }

  LIST_ADD(&sym_tbl->list, &sym->node);
}

struct symbol *symbol_table_lookup(struct symbol_table *sym_tbl, char *name)
{
  struct hash_node *hnode = hash_table_lookup(&sym_tbl->table, name);
  if (hnode != null) {
    return PARENT_STRUCT(hnode, struct symbol, hnode);
  }

  return null;
}
