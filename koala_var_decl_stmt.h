
#ifndef _KOALA_VAR_DECL_STMT_H_
#define _KOALA_VAR_DECL_STMT_H_

#include "koala_list.h"
#include "koala_stmt.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct var_decl_stmt {
  struct stmt stmt;
  struct list_head *ident_list;
  int type;
  struct list_head *value_list;
};

struct variable {
  struct list_head var_node;
  char *var_name;
};

struct var_decl_stmt *new_var_decl_stmt();
struct variable *new_variable(char *name);
void show_var_list(struct list_head *list);

END_DECLS /* 兼容C++编译宏 */

#endif
