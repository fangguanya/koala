
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "koala_syntax_tree.h"

base_type_t new_primitive_type(int type)
{
  base_type_t base_type;
  base_type.kind = PRIMITIVE_TYPE;
  base_type.primitive_type = type;
  return base_type;
}

base_type_t new_module_type(string *str)
{
  base_type_t base_type;
  base_type.kind = MODULE_TYPE;
  base_type.id[0] = str[0];
  base_type.id[1] = str[1];
  return base_type;
}

base_type_t new_func_type(linked_list_t *parameter_type_list,
                          linked_list_t *return_type_list)
{
  base_type_t base_type;
  base_type.kind = FUNCTION_TYPE;
  base_type.func_type.parameter_type_list = parameter_type_list;
  base_type.func_type.return_type_list = return_type_list;
  return base_type;
}

name_type_t *new_name_type(int dims, base_type_t base_type)
{
  name_type_t *name_type = malloc(sizeof(*name_type));
  name_type->dims = dims;
  name_type->base_type = base_type;
  return name_type;
}

variable_t *new_variable(string name, name_type_t *name_type)
{
  variable_t *variable = malloc(sizeof(*variable));
  variable->name = name;
  variable->type = name_type;
  return variable;
}

anonymous_function_t new_anonymous_func(linked_list_t *parameter_list,
  linked_list_t *return_type_list, linked_list_t *stmt_list)
{
  anonymous_function_t anonymous;
  anonymous.parameter_list = parameter_list;
  anonymous.return_type_list = return_type_list;
  anonymous.stmt_list = stmt_list;
  return anonymous;
}

void show_expr_list(linked_list_t *exp_list);

trailer_t *new_trailer_field_access(string id)
{
  trailer_t *trailer = malloc(sizeof(*trailer));
  trailer->kind = TRAILER_FIELD;
  trailer->id = id;
  return trailer;
}

trailer_t *new_trailer_array_access(expr_t *exp)
{
  trailer_t *trailer = malloc(sizeof(*trailer));
  trailer->kind = TRAILER_SUBSCRIPT;
  trailer->exp = exp;
  return trailer;
}

trailer_t *new_trailer_func_call(linked_list_t *args)
{
  trailer_t *trailer = malloc(sizeof(*trailer));
  trailer->kind = TRAILER_FUNCTION_CALL;
  trailer->args = args;
  return trailer;
}

trailer_t *new_trailer_interface_implementation()
{
  trailer_t *trailer = malloc(sizeof(*trailer));
  trailer->kind = TRAILER_INTERFACE_IMPLEMENTATION;
  return trailer;
}

term_t new_term_id(string id)
{
  term_t term;
  term.kind = TERM_ID;
  term.id = id;
  term.trailer_list = null;
  return term;
}

term_t new_term_self()
{
  term_t term;
  term.kind = TERM_SELF;
  term.trailer_list = null;
  return term;
}

term_t new_term_null()
{
  term_t term;
  term.kind = TERM_NULL;
  term.trailer_list = null;
  return term;
}

term_t new_term_uint(uint64 val)
{
  term_t term;
  term.kind = TERM_UINT;
  term.uint_num = val;
  term.trailer_list = null;
  return term;
}

term_t new_term_float(float64 val)
{
  term_t term;
  term.kind = TERM_FLOAT;
  term.float_num = val;
  term.trailer_list = null;
  return term;
}

term_t new_term_string(string val)
{
  term_t term;
  term.kind = TERM_STRING;
  term.str = val;
  term.trailer_list = null;
  return term;
}

term_t new_term_bool(bool val)
{
  term_t term;
  term.kind = TERM_BOOL;
  term.bool_val = val;
  term.trailer_list = null;
  return term;
}

term_t new_term_exp(expr_t *exp)
{
  term_t term;
  term.kind = TERM_EXP;
  term.exp = exp;
  term.trailer_list = null;
  return term;
}

term_t new_term_trailer(term_t term, linked_list_t *trailer_list)
{
  term.trailer_list = trailer_list;
  return term;
}

term_t new_term_anonymous(anonymous_function_t anonymous)
{
  term_t term;
  term.kind = TERM_ANONYMOUS_FUNCTION;
  term.anonymous_function = anonymous;
  return term;
}

static char *type_string_map[] = {
  null,
  "int8", "int16", "int32", "int64",
  "uint8", "uint16", "uint32", "uint64",
  "float32", "float64",
  "bool", "string", "root_object"
};

void show_base_type(base_type_t *base_type)
{
  switch (base_type->kind) {
    case PRIMITIVE_TYPE:
      printf("%s\n", type_string_map[base_type->primitive_type]);
    break;
    case MODULE_TYPE:
      if (base_type->id[0].val != null)
        printf("%s.%s\n", base_type->id[0].val, base_type->id[1].val);
      else
        printf("LOCAL.%s\n", base_type->id[1].val);
    break;
    case FUNCTION_TYPE:
      printf("FUNCTION_TYPE\n");
    break;
    default:
      fprintf(stderr, "unknown base type:%d\n", base_type->kind);
    break;
  }
}

void show_name_type(name_type_t *name_type)
{
  int i;
  printf("varialbe:type:");
  for (i = 0; i < name_type->dims; i++) {
    printf("[]");
  }
  show_base_type(&name_type->base_type);
}

void show_variable(variable_t *var)
{
  printf("variable:name:%s\n", var->name.val);
  show_name_type(var->type);
}

void show_variable_list(linked_list_t *variable_list)
{
  if (variable_list != null) {
    struct list_head *pos;
    variable_t *var;

    printf("variable list count:%d\n", variable_list->count);

    LIST_FOR_EACH(pos, &variable_list->head) {
      var = PARENT_STRUCT(pos, linked_node_t, node)->data;
      show_variable(var);
      printf("------------------\n");
    }
  }
}

void show_trailer(trailer_t *trailer)
{
  switch (trailer->kind) {
    case TRAILER_FIELD: {
      printf(".:%s\n", trailer->id.val);
      break;
    }
    case TRAILER_SUBSCRIPT: {
      printf("array access\n");
      break;
    }
    case TRAILER_FUNCTION_CALL: {
      printf("():\n");
      show_expr_list(trailer->args);
      break;
    }
    case TRAILER_INTERFACE_IMPLEMENTATION: {
      printf("interface implementation\n");
      break;
    }
    default: {
      fprintf(stderr, "unknown trailer type:%d\n", trailer->kind);
      break;
    }
  }
}

void show_type_list(linked_list_t *type_list)
{
  if (type_list != null) {
    struct list_head *pos;
    name_type_t *name_type;

    printf("type list count:%d\n", type_list->count);

    LIST_FOR_EACH(pos, &type_list->head) {
      name_type = PARENT_STRUCT(pos, linked_node_t, node)->data;
      show_name_type(name_type);
    }
  }
}

void show_trailer_list(linked_list_t *trailer_list)
{
  if (trailer_list != null) {
    struct list_head *pos;
    trailer_t *trailer;

    printf("trailer list count:%d\n", trailer_list->count);

    LIST_FOR_EACH(pos, &trailer_list->head) {
      trailer = PARENT_STRUCT(pos, linked_node_t, node)->data;
      show_trailer(trailer);
    }
  }
}

void show_term(term_t *term)
{
  switch (term->kind) {
    case TERM_ID: {
      printf("id:%s\n", term->id.val);
      show_trailer_list(term->trailer_list);
      break;
    }
    case TERM_UINT: {
      printf("num:%llu\n", term->uint_num);
      break;
    }
    case TERM_FLOAT: {
      printf("%.16lf", term->float_num);
      break;
    }
    case TERM_BOOL: {
      printf("%s", term->bool_val ? "true" : "false");
      break;
    }
    case TERM_STRING: {
      printf("str:%s\n", term->str.val);
      show_trailer_list(term->trailer_list);
      break;
    }
    case TERM_EXP: {
      printf("exp\n");
      show_trailer_list(term->trailer_list);
      break;
    }
    case TERM_ANONYMOUS_FUNCTION: {
      printf("anonymous function\n");
      show_variable_list(term->anonymous_function.parameter_list);
      show_type_list(term->anonymous_function.return_type_list);
      show_trailer_list(term->trailer_list);
      break;
    }
    default: {
      fprintf(stderr, "unknown terminal type:%d\n", term->kind);
      //assert(0);
      break;
    }
  }
}

expr_t *new_exp_term(term_t term)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term = term;
  return exp;
}

expr_t *new_exp_list(linked_list_t *list)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_LIST;
  exp->list = list;
  return exp;
}

expr_t *new_exp_binary(operator_t op, expr_t *left, expr_t *right)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_BINARAY;
  exp->binary_op.op = op;
  exp->binary_op.left = left;
  exp->binary_op.right = right;
  return exp;
}

expr_t *new_exp_unary(operator_t op, expr_t *expr)
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

void show_expr_list(linked_list_t *exp_list)
{
  if (exp_list != null) {
    struct list_head *pos;
    expr_t *exp;

    printf("expr list count:%d\n", exp_list->count);

    LIST_FOR_EACH(pos, &exp_list->head) {
      exp = PARENT_STRUCT(pos, linked_node_t, node)->data;
      show_expr(exp);
    }
  }
}

void show_expr(expr_t *exp)
{
  switch (exp->kind) {
    case EXP_TERM :
      show_term(&exp->term);
    break;
    case EXP_LIST :
      show_expr_list(exp->list);
    break;
    case EXP_BINARAY :
      show_binary(exp);
    break;
    case EXP_UNARY :
      show_unaray(exp);
    break;
    default:
      printf("unknown expr kind\n");
      //exit(-1);
    break;
  }
}

/* type checker */
void check_primitive_type(int type, term_t term)
{
  if ((type >= TYPE_INT8) && (type <= TYPE_UINT64)) {
    assert(term.kind == TERM_UINT);
  } else if ((type >= TYPE_FLOAT32) && (type <= TYPE_FLOAT64)) {
    assert(term.kind == TERM_FLOAT);
  } else if (type == TYPE_BOOL) {
    assert(term.kind == TERM_BOOL);
  } else if (type == TYPE_STRING) {
    assert(term.kind == TERM_STRING);
  } else {
    fprintf(stderr, "ERROR:unknown type\n");
    assert(0);
  }
}
