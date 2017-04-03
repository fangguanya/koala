
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "koala_syntax_tree.h"

base_type_t primitive_type(int type)
{
  base_type_t base_type;
  base_type.kind = PRIMITIVE_TYPE;
  base_type.primitive_type = type;
  return base_type;
}

base_type_t module_type(string *str)
{
  base_type_t base_type;
  base_type.kind = MODULE_TYPE;
  base_type.id[0] = str[0];
  base_type.id[1] = str[1];
  return base_type;
}

base_type_t func_type(linked_list_t *parameter_type_list,
                      linked_list_t *return_type_list)
{
  func_type_t *func_type = null;
  base_type_t base_type;
  base_type.kind = FUNCTION_TYPE;
  if ((parameter_type_list != null) || (return_type_list != null))
  {
    func_type = malloc(sizeof(*func_type));
    INIT_LINKED_LIST(&func_type->parameter_type_list);
    INIT_LINKED_LIST(&func_type->return_type_list);
    LINKED_LIST_MERGE_TAIL(&func_type->parameter_type_list,
                           parameter_type_list);
    LINKED_LIST_MERGE_TAIL(&func_type->return_type_list,
                           return_type_list);
  }
  base_type.func_type = func_type;
  return base_type;
}

name_type_t *new_name_type(int dims, base_type_t base_type)
{
  name_type_t *name_type = malloc(sizeof(*name_type));
  name_type->dims = dims;
  name_type->base_type = base_type;
  return name_type;
}

anonymous_function_t *new_anonymous_func(linked_list_t *parameter_list,
                                         linked_list_t *return_type_list,
                                         expr_t *codes)
{
  anonymous_function_t *anonymous = malloc(sizeof(*anonymous));
  INIT_LINKED_LIST(&anonymous->parameter_list);
  INIT_LINKED_LIST(&anonymous->return_type_list);
  LINKED_LIST_MERGE_TAIL(&anonymous->parameter_list, parameter_list);
  LINKED_LIST_MERGE_TAIL(&anonymous->return_type_list, return_type_list);
  anonymous->codes = codes;
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
  INIT_LINKED_LIST(&trailer->args_list);
  if (args != null)
    LINKED_LIST_MERGE_TAIL(&trailer->args_list, args);
  return trailer;
}

trailer_t *new_trailer_interface_implementation()
{
  trailer_t *trailer = malloc(sizeof(*trailer));
  trailer->kind = TRAILER_INTERFACE_IMPLEMENTATION;
  return trailer;
}

expr_t *new_exp_variable(string name, name_type_t *type, expr_t *value)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_VAR;
  exp->var.name = name;
  exp->var.type = type;
  exp->var.value = value;
  return exp;
}

expr_t *new_exp_constant(string name, name_type_t *type, expr_t *value)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_CONST;
  exp->var.name = name;
  exp->var.type = type;
  exp->var.value = value;
  return exp;
}

expr_t *new_exp_term_id(string id)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_ID;
  exp->term.id = id;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_self()
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_SELF;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_null()
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_NULL;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_uint(uint64 val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_UINT;
  exp->term.uint_num = val;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_float(float64 val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_FLOAT;
  exp->term.float_num = val;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_string(string val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_STRING;
  exp->term.str = val;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_bool(bool val)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_BOOL;
  exp->term.bool_val = val;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_exp(expr_t *e)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_EXP;
  exp->term.exp = e;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_anonymous(anonymous_function_t *anonymous)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TERM_ANONYMOUS_FUNC;
  exp->term.anonymous_func = anonymous;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
}

expr_t *new_exp_term_array_object(array_object_t *array_object)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TERM;
  exp->term.kind = TEMR_ARRAY_OBJECT;
  exp->term.array_object = array_object;
  INIT_LINKED_LIST(&exp->term.trailer_list);
  return exp;
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
  printf("type:");
  for (i = 0; i < name_type->dims; i++) {
    printf("[]");
  }
  show_base_type(&name_type->base_type);
}

void show_variable(variable_t *var)
{
  printf("----variable--------------\n");
  printf("name:%s\n", var->name.val);
  show_name_type(var->type);
  printf("--------------------------\n");
}

void show_variable_list(linked_list_t *variable_list)
{
  if ((variable_list != null) && !LINKED_LIST_EMPTY(variable_list)) {
    struct list_head *pos;
    expr_t *var;

    printf("variable count:%d\n", variable_list->count);

    LIST_FOR_EACH(pos, &variable_list->head) {
      var = LINKED_NODE_GET_DATA(pos);
      assert(var->kind == EXP_VAR);
      show_variable(&var->var);
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
      show_expr_list(&trailer->args_list);
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
  if ((type_list != null) && !LINKED_LIST_EMPTY(type_list)) {
    struct list_head *pos;
    name_type_t *name_type;

    printf("type count:%d\n", type_list->count);

    LIST_FOR_EACH(pos, &type_list->head) {
      name_type = LINKED_NODE_GET_DATA(pos);
      printf("----type--------------\n");
      show_name_type(name_type);
      printf("----------------------\n");
    }
  }
}

void show_trailer_list(linked_list_t *trailer_list)
{
  if ((trailer_list != null) && !LINKED_LIST_EMPTY(trailer_list)) {
    struct list_head *pos;
    trailer_t *trailer;

    printf("trailer count:%d\n", trailer_list->count);

    LIST_FOR_EACH(pos, &trailer_list->head) {
      trailer = LINKED_NODE_GET_DATA(pos);
      show_trailer(trailer);
    }
  }
}

void show_term(term_t *term)
{
  switch (term->kind) {
    case TERM_ID: {
      printf("id:%s\n", term->id.val);
      show_trailer_list(&term->trailer_list);
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
      show_trailer_list(&term->trailer_list);
      break;
    }
    case TERM_EXP: {
      printf("exp\n");
      show_trailer_list(&term->trailer_list);
      break;
    }
    case TERM_ANONYMOUS_FUNC: {
      printf("anonymous function\n");
      show_variable_list(&term->anonymous_func->parameter_list);
      show_type_list(&term->anonymous_func->return_type_list);
      show_trailer_list(&term->trailer_list);
      break;
    }
    default: {
      fprintf(stderr, "unknown terminal type:%d\n", term->kind);
      //assert(0);
      break;
    }
  }
}

expr_t *new_exp_seq(linked_list_t *seq)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_SEQ;
  INIT_LINKED_LIST(&exp->exp_seq);
  if (seq)
    LINKED_LIST_MERGE_TAIL(&exp->exp_seq, seq);
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
  if ((exp_list != null) && !LINKED_LIST_EMPTY(exp_list)) {
    struct list_head *pos;
    expr_t *exp;

    printf("expr list count:%d\n", exp_list->count);

    LIST_FOR_EACH(pos, &exp_list->head) {
      exp = LINKED_NODE_GET_DATA(pos);
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
    case EXP_SEQ :
      show_expr_list(&exp->exp_seq);
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
