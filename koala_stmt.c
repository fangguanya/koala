
#include "koala_stmt.h"

void init_stmt(struct stmt *stmt, int type)
{
  INIT_LIST_HEAD(&stmt->stmt_node);
  stmt->stmt_type = type;
}
