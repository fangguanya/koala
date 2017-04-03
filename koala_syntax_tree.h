
#ifndef _KOALA_SYNTAX_TREE_H_
#define _KOALA_SYNTAX_TREE_H_

#include "koala_common.h"
#include "koala_list.h"
#include "koala_types.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef enum {
  OP_INVALID,
  OP_INC_BEFORE, OP_DEC_BEFORE,
  OP_BNOT, OP_LNOT,
  OP_INC_AFTER, OP_DEC_AFTER,
  OP_TIMES, OP_DIVIDE, OP_MOD,
  OP_PLUS, OP_MINUS,
  OP_LSHIFT, OP_RSHIFT,
  OP_GT, OP_GE, OP_LT, OP_LE,
  OP_EQ, OP_NEQ,
  OP_BAND, OP_BXOR, OP_BOR,
  OP_LAND, OP_LOR,
} operator_t;

typedef enum {
  OP_INVALID_ASSIGN,
  OP_PLUS_ASSIGN, OP_MINUS_ASSIGN, OP_TIMES_ASSIGN, OP_DIVIDE_ASSIGN,
  OP_MOD_ASSIGN, OP_AND_ASSIGN, OP_OR_ASSIGN, OP_XOR_ASSIGN,
  OP_RIGHT_SHIFT_ASSIGN, OP_LEFT_SHIFT_ASSIGN,
  OP_TYPELESS_ASSIGN,
} compound_op_t;

typedef struct anonymous_function anonymous_function_t;
typedef struct function function_t;
typedef struct function_declaration function_declaration_t;

typedef struct func_type func_type_t;
typedef struct base_type base_type_t;
typedef struct name_type name_type_t;
typedef struct struct_type struct_type_t;
typedef struct intf_type intf_type_t;
typedef struct redef_type redef_type_t;
typedef struct type type_t;
typedef struct variable variable_t;

typedef struct trailer_node trailer_t;
typedef struct array_object array_object_t;
typedef struct term_node term_t;
typedef struct expr_node expr_t;

struct func_type {
  linked_list_t parameter_type_list;
  linked_list_t return_type_list;
};

struct base_type {
  enum {
    INVALID_TYPE, PRIMITIVE_TYPE, MODULE_TYPE, FUNCTION_TYPE,
  } kind;

  union {
    int primitive_type;
    string id[2];
    func_type_t *func_type;
  };
};

struct name_type {
  int dims;
  base_type_t base_type;
};

struct struct_type {
  string name;
  linked_list_t var_list;
  linked_list_t func_list;
};

struct intf_type {
  string name;
  linked_list_t func_decl_list;
};

struct redef_type {
  string name;
  name_type_t type;
};

struct type {
  enum {
    TYPE_INVALID, TYPE_STRUCT, TYPE_INTF, TYPE_REDEF,
  } kind;

  union {
    struct_type_t struct_type;
    intf_type_t intf_type;
    redef_type_t redef_type;
  };
};

base_type_t primitive_type(int type);
base_type_t module_type(string *str);
base_type_t func_type(linked_list_t *parameter_type_list,
                      linked_list_t *return_type_list);
name_type_t *new_name_type(int dims, base_type_t base_type);

struct variable {
  string name;
  bool is_const;
  name_type_t *type;
  expr_t *value;
};

variable_t *new_variable(string name, name_type_t *type);

struct function {
  string name;
  linked_list_t parameter_list;
  linked_list_t return_type_list;
  expr_t *codes;
};

struct function_declaration {
  string name;
  linked_list_t parameter_list;
  linked_list_t return_type_list;
};

struct trailer_node {
  enum {
    TRAILER_INVALID, TRAILER_FIELD, TRAILER_SUBSCRIPT,
    TRAILER_FUNCTION_CALL, TRAILER_INTERFACE_IMPLEMENTATION,
  } kind;

  union {
    string id;
    expr_t *exp;
    linked_list_t args_list;
    linked_list_t func_list;
  };
};

trailer_t *new_trailer_field_access(string id);
trailer_t *new_trailer_array_access(expr_t *exp);
trailer_t *new_trailer_func_call(linked_list_t *args);
trailer_t *new_trailer_interface_implementation();

struct anonymous_function {
  linked_list_t parameter_list;
  linked_list_t return_type_list;
  expr_t *codes;
};

anonymous_function_t *new_anonymous_func(linked_list_t *parameter_list,
                                         linked_list_t *return_type_list,
                                         expr_t *codes);

struct array_object {
  base_type_t base_type;
  linked_list_t subscript_exp_list;
};

array_object_t *new_array_object();

struct term_node {
  enum {
    TERM_INVALID, TERM_ID, TERM_SELF,
    TERM_UINT, TERM_FLOAT, TERM_BOOL, TERM_STRING, TERM_NULL,
    TERM_EXP,
    TERM_ANONYMOUS_FUNC,
    TEMR_ARRAY_OBJECT,
  } kind;

  union {
    string id;
    uint64 uint_num;
    float64 float_num;
    bool bool_val;
    string str;
    expr_t *exp;
    anonymous_function_t *anonymous_func;
    array_object_t *array_object;
  };

  linked_list_t trailer_list;
};

struct expr_node {
  enum {
    EXP_INVALID,
    //type
    EXP_TYPE,
    //variable
    EXP_VAR_LIST,
    //constant
    EXP_CONST_LIST,
    //function
    EXP_FUNC,
    //terminal symbol
    EXP_TERM,
    //expression sequence
    EXP_SEQ,
    //binary operation
    EXP_BINARAY,
    //unary operation
    EXP_UNARY,
    // assignment
    EXP_ASSIGN_LIST,
    // multi assignment operation
    EXP_COMPOUND_ASSIGN,
  } kind;

  union {
    type_t type;
    function_t func;
    term_t term;
    linked_list_t seq;
    struct {
      operator_t op;
      expr_t *left;
      expr_t *right;
    } binary_op;
    struct {
      operator_t op;
      expr_t *exp;
    } unary_op;
    struct {
      linked_list_t expr_list;
      linked_list_t value_list;
    } assign_list_op;
    struct {
      compound_op_t op;
      expr_t *exp;
      expr_t *value;
    } compund_assign_op;
  };

  //name_type_t exp_type;
};

expr_t *new_exp_var_list(linked_list_t *var_list);
expr_t *new_exp_cont_list(linked_list_t *const_list);
expr_t *new_exp_term_id(string id);
expr_t *new_exp_term_self();
expr_t *new_exp_term_null();
expr_t *new_exp_term_uint(uint64 val);
expr_t *new_exp_term_float(float64 val);
expr_t *new_exp_term_string(string val);
expr_t *new_exp_term_bool(bool val);
expr_t *new_exp_term_exp(expr_t *exp);
expr_t *new_exp_term_anonymous(anonymous_function_t *anonymous);
expr_t *new_exp_term_array_object(array_object_t *array_object);
expr_t *new_exp_binary(operator_t op, expr_t *left, expr_t *right);
expr_t *new_exp_unary(operator_t op, expr_t *expr);
expr_t *new_exp_seq(linked_list_t *seq);
expr_t *new_exp_assign_list(linked_list_t *exp_list, linked_list_t *init_list);
expr_t *new_exp_compound_assign(compound_op_t op, expr_t *exp, expr_t *value);

expr_t *build_variable_declaration(linked_list_t *var_list,
                                   name_type_t *type,
                                   linked_list_t *init_list,
                                   bool constant);

void show_expr(expr_t *exp);
void check_primitive_type(int type, term_t term);

END_DECLS /* 兼容C++编译宏 */

#endif
