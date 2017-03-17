
#ifndef _KOALA_STMT_H_
#define _KOALA_STMT_H_

#include "koala_list.h"

BEGIN_DECLS /* 兼容C++编译宏 */

#define STMT_TYPE_VAR_DECL  1

typedef struct stmt stmt_t;

struct stmt {
  struct list_head stmt_node;
  int stmt_type;
};

#define INIT_STMT(stmt, type) do {    \
  INIT_LIST_HEAD(&(stmt)->stmt_node); \
  (stmt)->stmt_type = type;           \
} while (0)

void add_stmt(stmt_t *stmt);
void handle_statements();

END_DECLS /* 兼容C++编译宏 */

#endif
