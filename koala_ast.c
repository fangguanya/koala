
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "koala_ast.h"

type_info_t *new_type_info(int kind, void *attr)
{
  type_info_t *type = malloc(sizeof(*type));
  type->kind = kind;
  type->attr = attr;
  return type;
}

array_type_t *new_array_type(int size, type_info_t *base_type)
{
  array_type_t *array_type = malloc(sizeof(*array_type));
  assert(array_type);
  array_type->size = size;
  array_type->base_type = base_type;
  return array_type;
}

func_proto_type_t *new_func_proto_type(linked_list_t *args,
                                       linked_list_t *results)
{
  func_proto_type_t *prototype = malloc(sizeof(*prototype));
  prototype->args = args;
  prototype->results = results;
  return prototype;
}

static char *type_string_map[] = {
  null,
  "int8", "int16", "int32", "int64",
  "uint8", "uint16", "uint32", "uint64",
  "float32", "float64",
  "bool", "string",
   "array", "struct", "interface", "function", "user-defined"
};

void show_var(var_t *var)
{
  switch (var->kind) {
    case VAR_SIMPLE: {
      printf("var:%s\n", var->simple.val);
      break;
    }
    case VAR_FIELD: {
      break;
    }
    case VAR_SUBSCRIPT: {
      break;
    }
    default: {
      assert(0);
      break;
    }
  }
}

var_t *new_simple_var(string name)
{
  var_t *var = malloc(sizeof(*var));
  assert(var);
  var->kind = VAR_SIMPLE;
  var->simple = name;
  return var;
}

void show_var_decl(var_decl_t *var_decl)
{
  var_t *var;
  struct list_head *pos;
  printf("---------------------\n");
  printf("count:%d\n", var_decl->var_list->count);
  LIST_FOR_EACH(pos, &var_decl->var_list->head)
  {
    var = PARENT_STRUCT(pos, linked_node_t, node)->data;
    show_var(var);
  }
  printf("type:%s\n", type_string_map[var_decl->type->kind]);

}

var_decl_t *new_var_decl(linked_list_t *var_list, type_info_t *type,
                         linked_list_t *init_list)
{
  var_decl_t *var_decl = malloc(sizeof(*var_decl));
  assert(var_decl);
  var_decl->var_list = var_list;
  var_decl->type = type;
  var_decl->init_list = init_list;
  show_var_decl(var_decl);
  return var_decl;
}

expr_t *new_uint_expr(uint64 val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_UINT;
  exp->uint_num = val;
  return exp;
}

expr_t *new_float_expr(float64 val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_FLOAT;
  exp->float_num = val;
  return exp;
}

expr_t *new_string_expr(string val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_STRING;
  exp->str = val;
  return exp;
}

expr_t *new_bool_expr(bool val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_BOOL;
  exp->bool_val = val;
  return exp;
}

expr_t *new_binary_exp(operator_t op, expr_t *left, expr_t *right)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_BINARAY;
  exp->binary_op.op = op;
  exp->binary_op.left = left;
  exp->binary_op.right = right;
  return exp;
}

expr_t *new_unary_exp(operator_t op, expr_t *expr)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_UNARY;
  exp->unary_op.op = op;
  exp->unary_op.exp = expr;
  return exp;
}

void show_binary(expr_t *exp)
{
  show_expr(exp->binary_op.left);
  show_expr(exp->binary_op.right);
  switch (exp->binary_op.op) {
    case OP_TIMES:
      putchar('*');
    break;

    case OP_DIVIDE:
      putchar('/');
    break;

    case OP_MOD:
      putchar('%');
    break;

    case OP_PLUS:
      putchar('+');
    break;

    case OP_MINUS:
      putchar('-');
    break;

    case OP_LSHIFT:
      printf("<<");
    break;

    case OP_RSHIFT:
      printf(">>");
    break;

    case OP_GT:
      putchar('>');
    break;

    case OP_GE:
      printf(">=");
    break;

    case OP_LT:
      putchar('<');
    break;

    case OP_LE:
      printf("<=");
    break;

    case OP_EQ:
      printf("==");
    break;

    case OP_NEQ:
      printf("!=");
    break;

    case OP_BAND:
      putchar('&');
    break;

    case OP_BOR:
      putchar('|');
    break;

    case OP_BXOR:
      putchar('^');
    break;

    case OP_LAND:
      printf("&&");
    break;

    case OP_LOR:
      printf("||");
    break;

    default:
      printf("unknown binary expr op\n");
      exit(-1);
    break;
  }
}

void show_unaray(expr_t *exp)
{
  switch (exp->unary_op.op) {
    case OP_MINUS:
    break;

    case OP_BNOT:
    break;

    case OP_LNOT:
    break;

    case OP_INC_AFTER:
    break;

    case OP_INC_BEFORE:
    break;

    case OP_DEC_AFTER:
    break;

    case OP_DEC_BEFORE:
    break;

    default:
      printf("unknown unaray expr op\n");
      exit(-1);
    break;
  }

  show_expr(exp->unary_op.exp);
}

void show_expr(expr_t *exp)
{
  switch (exp->kind) {
    case EXP_VAR :
      show_var(&exp->var);
    break;

    case EXP_UINT :
      printf("%llu", exp->uint_num);
    break;

    case EXP_FLOAT :
      printf("%f", exp->float_num);
    break;

    case EXP_BOOL :
      printf("%s", exp->bool_val ? "true" : "false");
    break;

    case EXP_STRING :
      printf("%s", exp->str.val);
    break;

    case EXP_BINARAY :
      show_binary(exp);
    break;

    case EXP_UNARY :
      show_unaray(exp);
    break;

    default:
      printf("unknown expr kind\n");
      exit(-1);
    break;
  }

  putchar(' ');
}
