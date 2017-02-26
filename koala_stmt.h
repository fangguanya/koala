
#ifndef _KOALA_STMT_H_
#define _KOALA_STMT_H_

#include "koala_list.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct stmt {
  struct list_head stmt_node;
  int stmt_type;
};

void init_stmt(struct stmt *stmt, int type);

END_DECLS /* 兼容C++编译宏 */

#endif
