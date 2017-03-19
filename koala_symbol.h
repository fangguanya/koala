
#ifndef _KOALA_SYMBOL_H_
#define _KOALA_SYMBOL_H_

#include "koala_list.h"
#include "koala_stack.h"
#include "koala_hash_table.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

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

void symbol_table_init(struct symbol_table *table);
void symbol_table_fini(struct symbol_table *table);

static inline void symbol_table_begin_scope(struct symbol_table *table)
{
  table->current_scope++;
}

static inline void symbol_table_end_scope(struct symbol_table *table)
{
  table->current_scope--;
}

int symbol_table_add(struct symbol_table *table, string name, int type);
struct symbol *symbol_table_find(struct symbol_table *table, string name);

END_DECLS /* 兼容C++编译宏 */

#endif
