
#ifndef _KOALA_SYMBOL_H_
#define _KOALA_SYMBOL_H_

#include "koala_list.h"
#include "koala_stack.h"
#include "koala_hash_table.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef struct symbol symbol_t;
typedef struct binder binder_t;
typedef struct symbol_table symbol_table_t;

struct symbol {
  string name;
  int type;
  int size;
  int offset;
  void *data;
};

struct binder {
  struct symbol *symbol;
  int scope;
  struct hash_node hnode;
};

struct symbol_table {
  int current_scope;
  struct hash_table table;
};

void symbol_table_init(symbol_table_t *table);
void symbol_table_fini(symbol_table_t *table);

static inline void symbol_table_begin_scope(symbol_table_t *table)
{
  table->current_scope++;
}

static inline void symbol_table_end_scope(symbol_table_t *table)
{
  table->current_scope--;
}

int symbol_table_add(symbol_table_t *table, string name, int type);
symbol_t *symbol_table_find(symbol_table_t *table, string name);

END_DECLS /* 兼容C++编译宏 */

#endif
