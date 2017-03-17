
#ifndef _KOALA_VAR_DECL_H_
#define _KOALA_VAR_DECL_H_

#include "koala_list.h"
#include "koala_stmt.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef struct {
  struct list_head node;
  string name;
} var_t;

typedef struct {
  struct list_head list;
  int count;
} var_list_t, expr_list_t;

typedef struct  {
  var_list_t *var_list;
  int type;
  expr_list_t *expr_list;
} var_decl_stmt_t;

var_t *new_var(string name);

var_list_t *new_var_list();

void var_list_add(var_list_t *list, var_t *var);

static inline expr_list_t *new_expr_list()
{
  return new_var_list();
}

stmt_t *new_var_decl_stmt();

int var_decl_stmt_parser(stmt_t *stmt);

/*-------------------------------------------------------------------------*/

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

struct variable *new_variable(char *name);
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
