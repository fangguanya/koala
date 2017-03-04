
#include "koala_stmt.h"

static LIST_HEAD(stmt_list);

void add_stmt(struct stmt *stmt)
{
  LIST_ADD_TAIL(&stmt_list, &stmt->stmt_node);
}

void init_stmt(struct stmt *stmt, int (*stmt_parser)(struct stmt *))
{
  INIT_LIST_HEAD(&stmt->stmt_node);
  stmt->stmt_parser = stmt_parser;
}
