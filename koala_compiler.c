
#include "koala_symbol_table.h"
#include "koala_stmt.h"

struct symbol_table symbol_table;
struct list_head stmt_list;

void add_stmt(struct stmt *stmt)
{
  LIST_ADD_TAIL(&stmt_list, &stmt->stmt_node);
}

void koala_compiler_init() {
  symbol_table_init(&symbol_table);
  INIT_LIST_HEAD(&stmt_list);
}
