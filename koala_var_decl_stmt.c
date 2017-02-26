
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "koala_var_decl_stmt.h"

struct var_decl_stmt *new_var_decl_stmt()
{
  struct var_decl_stmt *stmt = malloc(sizeof(*stmt));
  init_stmt(&stmt->stmt, 2);
  return stmt;
}

struct variable *new_variable(char *name)
{
  struct variable *var = malloc(sizeof(*var));
  assert(var != null);
  INIT_LIST_HEAD(&var->var_node);
  var->var_name = name;
  return var;
}

void show_var_list(struct list_head *list)
{
  struct variable *var;
  struct list_head *pos;
  LIST_FOR_EACH(pos, list)
  {
    var = PARENT_STRUCT(pos, struct variable, var_node);
    printf("%s ", var->var_name);
  }

  printf("\n");
}
