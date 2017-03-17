
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "koala_var_decl.h"
#include "koala_yacc.h"
#include "koala_symbol.h"

var_t *new_var(string name)
{
  var_t *var = malloc(sizeof(*var));
  assert(var);
  INIT_LIST_HEAD(&var->node);
  var->name = name;
  return var;
}

var_list_t *new_var_list()
{
  var_list_t *var_list = malloc(sizeof(*var_list));
  assert(var_list);
  INIT_LIST_HEAD(&var_list->list);
  var_list->count = 0;
  return var_list;
}

stmt_t *new_var_decl_stmt()
{
  var_decl_stmt_t *var_decl_stmt;
  stmt_t *stmt = malloc(sizeof(*stmt) + sizeof(var_decl_stmt_t));
  assert(stmt);
  INIT_STMT(stmt, STMT_TYPE_VAR_DECL);
  var_decl_stmt = (var_decl_stmt_t *)(stmt + 1);
  var_decl_stmt->var_list = null;
  var_decl_stmt->type = 0;
  var_decl_stmt->expr_list = null;
  return stmt;
}

void var_list_add(var_list_t *list, var_t *var)
{
  LIST_ADD_TAIL(&list->list, &var->node);
  list->count++;
}

static void show_var_decl_stmt(var_decl_stmt_t *stmt);

int var_decl_stmt_parser(stmt_t *stmt)
{
  var_decl_stmt_t *var_decl_stmt = (var_decl_stmt_t *)(stmt + 1);
  show_var_decl_stmt(var_decl_stmt);
}

static void show_var_decl_stmt(var_decl_stmt_t *stmt)
{
  var_t *var;
  struct list_head *pos;

  printf("-----------------------------\n");
  printf("statement: VAR_DECL_STMT\nvar_count:%d\n", stmt->var_list->count);

  LIST_FOR_EACH(pos, &stmt->var_list->list)
  {
    var = PARENT_STRUCT(pos, var_t, node);
    printf("id:%s\n", var->name.val);
  }

  printf("type:%d\n", stmt->type);

  if (stmt->expr_list != null)
  {
    printf("\nval_count: %d\n", stmt->expr_list->count);

    LIST_FOR_EACH(pos, &stmt->expr_list->list)
    {
      //val = PARENT_STRUCT(pos, struct value, val_node);
      //print_value(val);
    }
  }

  printf("-----------------------------\n");
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
    case TYPE_UINT64 : {
      printf("%llu ", val->i);
      break;
    }

    case TYPE_BOOL : {
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
      printf("value:%s(ID)\n", node->s.val);
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
