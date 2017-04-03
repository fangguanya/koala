
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

func_type_t *new_func_type(linked_list_t *parameter_type_list,
                           linked_list_t *return_type_list)
{
  func_type_t *func_type = malloc(sizeof(*func_type));
  INIT_LINKED_LIST(&func_type->parameter_type_list);
  INIT_LINKED_LIST(&func_type->return_type_list);
  if (parameter_type_list != null) {
    LINKED_LIST_MERGE_TAIL(&func_type->parameter_type_list,
                           parameter_type_list);
  }
  if (return_type_list != null) {
    LINKED_LIST_MERGE_TAIL(&func_type->return_type_list,
                           return_type_list);
  }
  return func_type;
}

void free_func_type(func_type_t *func_type)
{
  if (func_type != null) {
    void *data = linked_list_pop_first(&func_type->parameter_type_list);
    while (data != null) {
      free_name_type(data);
      data = linked_list_pop_first(&func_type->parameter_type_list);
    }
    data = linked_list_pop_first(&func_type->return_type_list);
    while (data != null) {
      free_name_type(data);
      data = linked_list_pop_first(&func_type->return_type_list);
    }
    free(func_type);
  }
}

base_type_t func_type(linked_list_t *parameter_type_list,
                      linked_list_t *return_type_list)
{
  func_type_t *func_type = null;
  base_type_t base_type;
  base_type.kind = FUNCTION_TYPE;
  if ((parameter_type_list != null) || (return_type_list != null)) {
    func_type = new_func_type(parameter_type_list, return_type_list);
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

void free_name_type(name_type_t *type)
{
  if (type == null) return;

  if (type->base_type.kind == FUNCTION_TYPE) {
    free_func_type(type->base_type.func_type);
  }

  free(type);
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

void show_expr_list(linked_list_t *exp_list)
{
  if ((exp_list != null) && !LINKED_LIST_EMPTY(exp_list)) {
    struct list_head *pos;
    expr_t *exp;

    outf("----expressions(count:%d)-----\n", exp_list->count);

    LIST_FOR_EACH(pos, &exp_list->head) {
      exp = LINKED_NODE_GET_DATA(pos);
      show_expr(exp);
      //outs("\n");
    }

    outs("------------------------------\n");
  }
}

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

variable_t *new_variable(string name, name_type_t *type)
{
  variable_t *var = malloc(sizeof(*var));
  var->name = name;
  var->extern_visible = IS_UPPER_CASE(name.val[0]);
  var->is_constant = false;
  NAME_TYPE_SET(var->type, type);
  var->value = null;
  return var;
}

void free_variable(variable_t *var)
{
  if (var != null) {
    if (var->type.base_type.kind == FUNCTION_TYPE) {
      free_func_type(var->type.base_type.func_type);
    }
    assert(var->value == null);
    free(var);
  }
}

variable_t *new_constant(string name, name_type_t *type)
{
  variable_t *var = malloc(sizeof(*var));
  var->name = name;
  var->extern_visible = IS_UPPER_CASE(name.val[0]);
  var->is_constant = true;
  NAME_TYPE_SET(var->type, type);
  var->value = null;
  return var;
}

void init_function(function_t *func,
                   string name,
                   linked_list_t *parameter_list,
                   linked_list_t *return_type_list,
                   expr_t *codes)
{
  func->name = name;
  INIT_LINKED_LIST(&func->parameter_list);
  INIT_LINKED_LIST(&func->return_type_list);
  if (parameter_list != null)
    LINKED_LIST_MERGE_TAIL(&func->parameter_list, parameter_list);
  if (return_type_list != null)
    LINKED_LIST_MERGE_TAIL(&func->return_type_list, return_type_list);
  func->codes = codes;
}

function_t *new_method(string name,
                       linked_list_t *parameter_list,
                       linked_list_t *return_type_list,
                       expr_t *codes)
{
  function_t *func = malloc(sizeof(*func));
  init_function(func, name, parameter_list, return_type_list, codes);
  return func;
}

intf_func_proto_t *new_intf_func_proto(string name,
                                       linked_list_t *parameter_list,
                                       linked_list_t *parameter_type_list,
                                       linked_list_t *return_type_list)
{
  intf_func_proto_t *proto = malloc(sizeof(*proto));
  proto->name = name;
  INIT_LINKED_LIST(&proto->parameter_type_list);
  INIT_LINKED_LIST(&proto->return_type_list);

  if (parameter_list != null) {
    name_type_t *type;
    variable_t *var = linked_list_pop_first(parameter_list);
    while (var != null) {
      type = new_name_type(var->type.dims, var->type.base_type);
      linked_list_add_tail(&proto->parameter_type_list, type);
      free_variable(var);
      var = linked_list_pop_first(parameter_list);
    }
  }

  if (parameter_type_list != null)
    LINKED_LIST_MERGE_TAIL(&proto->parameter_type_list, parameter_type_list);
  if (return_type_list != null)
    LINKED_LIST_MERGE_TAIL(&proto->return_type_list, return_type_list);
  return proto;
}

expr_t *new_exp_type_struct(string name,
                           linked_list_t *field_list,
                           linked_list_t *func_list)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TYPE;
  exp->type.kind = TYPE_STRUCT;
  exp->type.struct_type.name = name;
  INIT_LINKED_LIST(&exp->type.struct_type.field_list);
  INIT_LINKED_LIST(&exp->type.struct_type.func_list);
  if (field_list != null)
    LINKED_LIST_MERGE_TAIL(&exp->type.struct_type.field_list, field_list);
  if (func_list != null)
    LINKED_LIST_MERGE_TAIL(&exp->type.struct_type.func_list, func_list);
  return exp;
}

expr_t *new_exp_type_interface(string name, linked_list_t *func_proto_list)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_TYPE;
  exp->type.kind = TYPE_INTF;
  exp->type.intf_type.name = name;
  INIT_LINKED_LIST(&exp->type.intf_type.func_proto_list);
  if (func_proto_list != null) {
    LINKED_LIST_MERGE_TAIL(&exp->type.intf_type.func_proto_list,
                           func_proto_list);
  }
  return exp;
}

expr_t *new_exp_type_redef();

expr_t *new_exp_function(string name,
                         linked_list_t *parameter_list,
                         linked_list_t *return_type_list,
                         expr_t *codes)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_FUNC;
  init_function(&exp->func, name, parameter_list, return_type_list, codes);
  return exp;
}

expr_t *new_exp_var_list(linked_list_t *var_list)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_VAR_LIST;
  INIT_LINKED_LIST(&exp->seq);
  if (var_list)
    LINKED_LIST_MERGE_TAIL(&exp->seq, var_list);
  return exp;
}

expr_t *new_exp_cont_list(linked_list_t *const_list)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_CONST_LIST;
  INIT_LINKED_LIST(&exp->seq);
  if (const_list)
    LINKED_LIST_MERGE_TAIL(&exp->seq, const_list);
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
      outf("%s\n", type_string_map[base_type->primitive_type]);
    break;
    case MODULE_TYPE:
      if (base_type->id[0].val != null)
        outf("%s.%s\n", base_type->id[0].val, base_type->id[1].val);
      else
        outf("LOCAL.%s\n", base_type->id[1].val);
    break;
    case FUNCTION_TYPE:
      outf("FUNCTION_TYPE\n");
    break;
    default:
      error_outf("unknown base type:%d\n", base_type->kind);
      exit(-1);
    break;
  }
}

void show_name_type(name_type_t *name_type)
{
  if ((name_type == null) || (name_type->base_type.kind == INVALID_TYPE)) {
    outs("type:NO\n");
    return;
  }

  outs("type:");
  for (int i = 0; i < name_type->dims; i++) {
    outs("[]");
  }
  show_base_type(&name_type->base_type);
}

void show_variable(variable_t *var)
{
  outf("name:%s\n", var->name.val);
  outf("visible:%s\n", var->extern_visible ? "public" : "private");
  outf("const:%s\n", var->is_constant ? "true" : "false");
  show_name_type(&var->type);

  if (var->value) {
    outs("value:");
    show_expr(var->value);
    outs("\n");
  }
}

void show_parameter_list(linked_list_t *variable_list)
{
  if ((variable_list != null) && !LINKED_LIST_EMPTY(variable_list)) {
    struct list_head *pos;
    variable_t *var;

    outf("----parameters(count:%d)----\n", variable_list->count);

    LIST_FOR_EACH(pos, &variable_list->head) {
      var = LINKED_NODE_GET_DATA(pos);
      outs("------------------\n");
      show_variable(var);
    }

    outs("--------------------------\n");
  }
}

void show_trailer(trailer_t *trailer)
{
  switch (trailer->kind) {
    case TRAILER_FIELD: {
      outf(".:%s\n", trailer->id.val);
      break;
    }
    case TRAILER_SUBSCRIPT: {
      outs("array access\n");
      break;
    }
    case TRAILER_FUNCTION_CALL: {
      outs("():\n");
      show_expr_list(&trailer->args_list);
      break;
    }
    case TRAILER_INTERFACE_IMPLEMENTATION: {
      outs("interface implementation\n");
      break;
    }
    default: {
      error_outf("unknown trailer type:%d\n", trailer->kind);
      break;
    }
  }
}

void show_type_list(linked_list_t *type_list)
{
  if ((type_list != null) && !LINKED_LIST_EMPTY(type_list)) {
    struct list_head *pos;
    name_type_t *name_type;

    outf("----types(count:%d)----\n", type_list->count);

    LIST_FOR_EACH(pos, &type_list->head) {
      name_type = LINKED_NODE_GET_DATA(pos);
      outs("------------------\n");
      show_name_type(name_type);
    }

    outs("-----------------------\n");
  }
}

void show_trailer_list(linked_list_t *trailer_list)
{
  if ((trailer_list != null) && !LINKED_LIST_EMPTY(trailer_list)) {
    struct list_head *pos;
    trailer_t *trailer;

    outf("\n----trailers(count:%d)------\n", trailer_list->count);

    LIST_FOR_EACH(pos, &trailer_list->head) {
      trailer = LINKED_NODE_GET_DATA(pos);
      show_trailer(trailer);
    }

    outs("---------------------------\n");
  }
}

void show_term(term_t *term)
{
  switch (term->kind) {
    case TERM_ID: {
      outf("%s ", term->id.val);
      show_trailer_list(&term->trailer_list);
      break;
    }
    case TERM_SELF: {
      outs("self ");
      show_trailer_list(&term->trailer_list);
      break;
    }
    case TERM_UINT: {
      outf("%llu ", term->uint_num);
      break;
    }
    case TERM_FLOAT: {
      outf("%.16lf ", term->float_num);
      break;
    }
    case TERM_BOOL: {
      outf("%s ", term->bool_val ? "true" : "false");
      break;
    }
    case TERM_STRING: {
      outf("\"%s\"", term->str.val);
      show_trailer_list(&term->trailer_list);
      break;
    }
    case TERM_EXP: {
      show_expr(term->exp);
      show_trailer_list(&term->trailer_list);
      break;
    }
    case TERM_ANONYMOUS_FUNC: {
      outs("anonymous function\n");
      show_parameter_list(&term->anonymous_func->parameter_list);
      show_type_list(&term->anonymous_func->return_type_list);
      show_trailer_list(&term->trailer_list);
      break;
    }
    default: {
      error_outf("unknown terminal type:%d\n", term->kind);
      exit(-1);
      break;
    }
  }
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

expr_t *new_exp_seq(linked_list_t *seq)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_SEQ;
  INIT_LINKED_LIST(&exp->seq);
  if (seq)
    LINKED_LIST_MERGE_TAIL(&exp->seq, seq);
  return exp;
}

expr_t *new_exp_assign_list(linked_list_t *exp_list, linked_list_t *init_list)
{
  assert(exp_list->count == init_list->count);
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_ASSIGN_LIST;
  INIT_LINKED_LIST(&exp->assign_list_op.expr_list);
  INIT_LINKED_LIST(&exp->assign_list_op.value_list);
  LINKED_LIST_MERGE_TAIL(&exp->assign_list_op.expr_list, exp_list);
  LINKED_LIST_MERGE_TAIL(&exp->assign_list_op.value_list, init_list);
  return exp;
}

expr_t *new_exp_compound_assign(compound_op_t op, expr_t *exp, expr_t *value)
{
  expr_t *compound_assign = malloc(sizeof(*compound_assign));
  compound_assign->kind = EXP_COMPOUND_ASSIGN;
  compound_assign->compund_assign_op.op = op;
  compound_assign->compund_assign_op.exp = exp;
  compound_assign->compund_assign_op.value = value;
  return compound_assign;
}

expr_t *new_exp_return(linked_list_t *exp_list)
{
  expr_t *exp = malloc(sizeof(*exp));
  exp->kind = EXP_RETURN;
  INIT_LINKED_LIST(&exp->seq);
  if (exp_list)
    LINKED_LIST_MERGE_TAIL(&exp->seq, exp_list);
  return exp;
}

void show_binary(expr_t *exp)
{
  show_expr(exp->binary_op.left);
  show_expr(exp->binary_op.right);
  switch (exp->binary_op.op) {
    case OP_TIMES:
      outs("* ");
    break;

    case OP_DIVIDE:
      outs("/ ");
    break;

    case OP_MOD:
      outs("% ");
    break;

    case OP_PLUS:
      outs("+ ");
    break;

    case OP_MINUS:
      outs("- ");
    break;

    case OP_LSHIFT:
      outs("<< ");
    break;

    case OP_RSHIFT:
      outs(">> ");
    break;

    case OP_GT:
      outs("> ");
    break;

    case OP_GE:
      outs(">= ");
    break;

    case OP_LT:
      outs("< ");
    break;

    case OP_LE:
      outs("<= ");
    break;

    case OP_EQ:
      outs("== ");
    break;

    case OP_NEQ:
      outs("!= ");
    break;

    case OP_BAND:
      outs("& ");
    break;

    case OP_BOR:
      outs("| ");
    break;

    case OP_BXOR:
      outs("^ ");
    break;

    case OP_LAND:
      outs("&& ");
    break;

    case OP_LOR:
      outs("|| ");
    break;

    default:
      outf("unknown binary expr op: %d\n", exp->binary_op.op);
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
      outf("unknown unaray expr op: %d\n", exp->unary_op.op);
      exit(-1);
    break;
  }

  show_expr(exp->unary_op.exp);
}

void show_var_list(linked_list_t *list)
{
  struct list_head *pos;
  variable_t *var;

  LINKED_LIST_FOREACH(pos, list) {
    var = LINKED_NODE_GET_DATA(pos);
    outs("----variable----\n");
    show_variable(var);
    outs("----------------\n");
  }
}

void show_function(function_t *func)
{
  outs("----function----\n");
  outf("name:%s\n", func->name.val);
  show_var_list(&func->parameter_list);
  show_type_list(&func->return_type_list);
  show_expr(func->codes);
  outs("----------------\n");
}

void show_func_list(linked_list_t *list)
{
  struct list_head *pos;
  function_t *func;

  LINKED_LIST_FOREACH(pos, list) {
    func = LINKED_NODE_GET_DATA(pos);
    show_function(func);
  }
}

void show_intf_func_proto(intf_func_proto_t *proto)
{
  outs("----proto----\n");
  outf("name:%s\n", proto->name.val);
  show_type_list(&proto->parameter_type_list);
  show_type_list(&proto->return_type_list);
  outs("----------------\n");
}

void show_intf_func_proto_list(linked_list_t *list)
{
  struct list_head *pos;
  intf_func_proto_t *proto;

  LINKED_LIST_FOREACH(pos, list) {
    proto = LINKED_NODE_GET_DATA(pos);
    show_intf_func_proto(proto);
  }
}

void show_compound_op(compound_op_t op)
{
  switch (op) {
    case OP_PLUS_ASSIGN:
      outs("+=\n");
    break;
    case OP_MINUS_ASSIGN:
      outs("-=\n");
    break;
    case OP_TIMES_ASSIGN:
      outs("*=\n");
    break;
    case OP_DIVIDE_ASSIGN:
      outs("/=\n");
    break;
    case OP_MOD_ASSIGN:
      outs("%%=\n");
    break;
    case OP_AND_ASSIGN:
      outs("&=\n");
    break;
    case OP_OR_ASSIGN:
      outs("|=\n");
    break;
    case OP_XOR_ASSIGN:
      outs("^=\n");
    break;
    case OP_RIGHT_SHIFT_ASSIGN:
      outs(">>=\n");
    break;
    case OP_LEFT_SHIFT_ASSIGN:
      outs("<<=\n");
    break;
    case OP_TYPELESS_ASSIGN:
      outs(":=\n");
    break;
    default:
      outf("unknown compound op:%d\n", op);
      exit(-1);
    break;
  }
}

void show_type_struct(struct_type_t *struct_type)
{
  outf("----struct(name:%s)----\n", struct_type->name.val);
  show_var_list(&struct_type->field_list);
  show_func_list(&struct_type->func_list);
  outs("----struct end----------------\n");
}

void show_type_interface(intf_type_t *intf_type)
{
  outf("----interface(name:%s)----\n", intf_type->name.val);
  show_intf_func_proto_list(&intf_type->func_proto_list);
  outs("----interface end----------------\n");
}

void show_type(type_t *type)
{
  switch (type->kind) {
    case TYPE_STRUCT:
      show_type_struct(&type->struct_type);
    break;
    case TYPE_INTF:
      show_type_interface(&type->intf_type);
    break;
    case TYPE_REDEF:
    break;
    default:
      error_outf("Unknown type type:%d\n", type->kind);
      exit(-1);
    break;
  }
}

void show_expr(expr_t *exp)
{
  if (exp == null) {
    error_outs("NO EXP\n");
    return;
  }

  switch (exp->kind) {
    case EXP_TYPE :
      show_type(&exp->type);
    break;
    case EXP_FUNC :
      show_function(&exp->func);
    break;
    case EXP_TERM :
      show_term(&exp->term);
    break;
    case EXP_SEQ :
    case EXP_RETURN :
      show_expr_list(&exp->seq);
    break;
    case EXP_VAR_LIST :
    case EXP_CONST_LIST :
      show_var_list(&exp->seq);
    break;
    case EXP_BINARAY :
      show_binary(exp);
    break;
    case EXP_UNARY :
      show_unaray(exp);
    break;
    case EXP_ASSIGN_LIST :
      outs("----assignment-------------------\n");
      show_expr_list(&exp->assign_list_op.expr_list);
      show_expr_list(&exp->assign_list_op.value_list);
      outs("---------------------------------\n");
    break;
    case EXP_COMPOUND_ASSIGN :
      outs("----compound assignment----------\n");
      show_expr(exp->compund_assign_op.exp);
      show_expr(exp->compund_assign_op.value);
      show_compound_op(exp->compund_assign_op.op);
      outs("---------------------------------\n");
    break;
    default:
      outf("unknown expr kind:%d\n", exp->kind);
      exit(-1);
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
    error_outf("Unknown type:%d\n", type);
    assert(0);
  }
}

expr_t *build_variable_declaration(linked_list_t *var_list,
                                   name_type_t *type,
                                   linked_list_t *init_list,
                                   bool constant)
{
  struct list_head *pos;
  struct list_head *node;
  linked_node_t *linked_node;
  variable_t *var;
  expr_t *init_exp;

  assert(var_list != null);
  if (init_list != null) {
    assert(var_list->count == init_list->count);
  }

  LINKED_LIST_FOREACH(pos, var_list) {
    var = LINKED_NODE_GET_DATA(pos);
    var->is_constant = constant;
    NAME_TYPE_SET(var->type, type);
    var->value = linked_list_pop_first(init_list);
  }

  return new_exp_var_list(var_list);
}
