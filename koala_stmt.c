
#include "koala_stmt.h"
#include "koala_var_decl.h"

static LIST_HEAD(stmt_list);
static int (*stmt_parser[])(stmt_t *) = {
  null,
  var_decl_stmt_parser
};

void add_stmt(stmt_t *stmt)
{
  LIST_ADD_TAIL(&stmt_list, &stmt->stmt_node);
}

void handle_statements()
{
  stmt_t *stmt;
  struct list_head *pos;
  LIST_FOR_EACH(pos, &stmt_list)
  {
    stmt = PARENT_STRUCT(pos, stmt_t, stmt_node);
    stmt_parser[stmt->stmt_type](stmt);
  }
}
