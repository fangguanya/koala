
#ifndef _KOALA_VAR_DECL_H_
#define _KOALA_VAR_DECL_H_

#include "koala_list.h"
#include "koala_stmt.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct var_decl_stmt {
  struct stmt stmt;
  struct list_head *ident_list;
  int id_count;
  int type;
  struct list_head *value_list;
  int val_count;
};

struct variable {
  struct list_head var_node;
  char *var_name;
};

struct value {
  struct list_head val_node;
  int type;
  union {
    uint64 i;
    double d;
    char   b;
    string s;
  };
};

struct var_decl_stmt *new_var_decl_stmt();
struct variable *new_variable(char *name);
void show_var_decl(struct var_decl_stmt *stmt);

struct value *new_value();

struct expr_node {
  struct expr_node *left;
  struct expr_node *right;
  int type;
  union {
    int op;
    int64 i;
    float64 f;
    bool b;
    string s;
  };
};

struct expr_node *new_expr_node(int type);
void expr_tree_print(struct expr_node *tree);

END_DECLS /* 兼容C++编译宏 */

#endif
