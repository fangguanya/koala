
#ifndef _KOALA_SYMBOL_TABLE_H_
#define _KOALA_SYMBOL_TABLE_H_

#include "koala_list.h"
#include "koala_hash_table.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct symbol {
  char *name;
  int type;
  void *value;
  struct list_head node;
  struct hash_node hnode;
};

struct symbol_table {
  struct list_head list;
  struct hash_table table;
};

struct symbol *new_symbol(char *name, int type, void *value);

void symbol_table_init(struct symbol_table *sym_tbl);

void symbol_table_add(struct symbol_table *sym_tbl, struct symbol *sym);

struct symbol *symbol_table_lookup(struct symbol_table *sym_tbl, char *name);

END_DECLS /* 兼容C++编译宏 */

#endif
