
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "koala_var_decl.h"

static int var_decl_stmt_parser(struct stmt *stmt)
{
  return 0;
}

struct var_decl_stmt *new_var_decl_stmt()
{
  struct var_decl_stmt *stmt = malloc(sizeof(*stmt));
  init_stmt(&stmt->stmt, var_decl_stmt_parser);
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

static void print_value(struct value *val)
{
  switch (val->type) {
    case KOALA_TYPE_UINT64 : {
      printf("%llu ", val->i);
      break;
    }

    case KOALA_TYPE_BOOL : {
      if (val->b)
        printf("true ");
      else
        printf("false ");
      break;
    }

    default : {
      break;
    }
  }
}

void show_var_decl(struct var_decl_stmt *stmt)
{
  struct variable *var;
  struct value *val;
  struct list_head *pos;
  LIST_FOR_EACH(pos, stmt->ident_list)
  {
    var = PARENT_STRUCT(pos, struct variable, var_node);
    printf("%s ", var->var_name);
  }

  printf(" = ");

  LIST_FOR_EACH(pos, stmt->value_list)
  {
    val = PARENT_STRUCT(pos, struct value, val_node);
    print_value(val);
  }

  printf("\n");
}

struct value *new_value()
{
  struct value *val = malloc(sizeof(*val));
  INIT_LIST_HEAD(&val->val_node);
  return val;
}

struct expr_node *new_expr_node(int type)
{
  struct expr_node *node = malloc(sizeof(*node));
  node->type = type;
  node->left = node->right = null;
  node->i = 0;
  return node;
}

void show_node_type(struct expr_node *node)
{

}

void expr_node_print(struct expr_node *node)
{
  printf("type:%d\n", node->type);
  switch (node->type)
  {
    case ID:
    {
      printf("value:%s(ID)\n", STRING_GET(node->s));
      break;
    }
    case INTEGER:
    {
      printf("value:%lld(INT)\n", node->i);
      break;
    }
    case OP:
    {
      printf("value:ADD(OP)\n");
      break;
    }
    default:
    {
      printf("Unknown type(%d)\n", node->type);
      break;
    }
  }
}
void expr_tree_print(struct expr_node *tree)
{
  if (tree == null)
    return;

  expr_tree_print(tree->left);
  expr_node_print(tree);
  expr_tree_print(tree->right);
}
