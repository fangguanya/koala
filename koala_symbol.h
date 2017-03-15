
#ifndef _KOALA_AST_H_
#define _KOALA_AST_H_

#include "koala_list.h"
#include "koala_stack.h"
#include "koala_hash_table.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

#define SYMBOL_TYPE_INT8      1
#define SYMBOL_TYPE_INT16     2
#define SYMBOL_TYPE_INT32     3
#define SYMBOL_TYPE_INT64     4
#define SYMBOL_TYPE_UINT8     5
#define SYMBOL_TYPE_UINT16    6
#define SYMBOL_TYPE_UINT32    7
#define SYMBOL_TYPE_UINT64    8
#define SYMBOL_TYPE_FLOAT32   9
#define SYMBOL_TYPE_FLOAT64   10
#define SYMBOL_TYPE_BOOL      11
#define SYMBOL_TYPE_STRING    12
#define SYMBOL_TYPE_STRUCT    13
#define SYMBOL_TYPE_INTF      14
#define SYMBOL_TYPE_FUNC      15
#define SYMBOL_TYPE_ARRAY     16
#define SYMBOL_TYPE_POINTER   17

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
