
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
  plus_assign_op, minus_assign_op, times_assign_op, divide_assign_op,
} multi_assign_op_t;

typedef struct anonymous_function anonymous_function_t;
typedef struct function function_t;
typedef struct function_declaration function_declaration_t;

typedef struct base_type base_type_t;
typedef struct name_type name_type_t;
typedef struct struct_type struct_type_t;
typedef struct intf_type intf_type_t;
typedef struct redef_type redef_type_t;
typedef struct type type_t;
typedef struct variable variable_t;

typedef struct trailer_node trailer_t;
typedef struct term_node term_t;
typedef struct expr_node expr_t;

struct base_type {
  enum {
    INVALID_TYPE, PRIMITIVE_TYPE, MODULE_TYPE, FUNCTION_TYPE,
  } kind;

  union {
    int primitive_type;
    string id[2];
    struct {
      linked_list_t *parameter_type_list;
      linked_list_t *return_type_list;
    } func_type;
  };
};

struct name_type {
  int dims;
  base_type_t base_type;
};

struct variable {
  string name;
  name_type_t *type;
};

struct struct_type {
  string name;
  linked_list_t *var_list;
  linked_list_t *func_list;
};

struct intf_type {
  string name;
  linked_list_t *func_decl_list;
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

base_type_t new_primitive_type(int type);
base_type_t new_module_type(string *str);
base_type_t new_func_type(linked_list_t *parameter_type_list,
                          linked_list_t *return_type_list);
name_type_t *new_name_type(int dims, base_type_t base_type);
variable_t *new_variable(string name, name_type_t *name_type);

struct anonymous_function {
  linked_list_t *parameter_list;
  linked_list_t *return_type_list;
  linked_list_t *stmt_list;
};

anonymous_function_t new_anonymous_func(linked_list_t *parameter_list,
  linked_list_t *return_type_list, linked_list_t *stmt_list);

struct function {
  string name;
  linked_list_t *parameter_list;
  linked_list_t *return_type_list;
  linked_list_t *stmt_list;
};

struct function_declaration {
  string name;
  linked_list_t *parameter_list;
  linked_list_t *return_type_list;
};

struct trailer_node {
  enum {
    TRAILER_INVALID, TRAILER_FIELD, TRAILER_SUBSCRIPT,
    TRAILER_FUNCTION_CALL, TRAILER_INTERFACE_IMPLEMENTATION,
  } kind;

  union {
    string id;
    expr_t *exp;
    linked_list_t *args;
    linked_list_t *func_list;
  };
};

trailer_t *new_trailer_field_access(string id);
trailer_t *new_trailer_array_access(expr_t *exp);
trailer_t *new_trailer_func_call(linked_list_t *args);
trailer_t *new_trailer_interface_implementation();

struct term_node {
  enum {
    TERM_INVALID, TERM_ID, TERM_SELF,
    TERM_UINT, TERM_FLOAT, TERM_BOOL, TERM_STRING, TERM_NULL,
    TERM_EXP,
    TERM_ANONYMOUS_FUNCTION,
    TEMR_ARRAY,
  } kind;

  union {
    string id;
    uint64 uint_num;
    float64 float_num;
    bool bool_val;
    string str;
    expr_t *exp;
    anonymous_function_t anonymous_function;
    struct {
      base_type_t base_type;
      linked_list_t *subscript_list;
    } array;
  };

  linked_list_t *trailer_list;
};

term_t new_term_id(string id);
term_t new_term_self();
term_t new_term_null();
term_t new_term_uint(uint64 val);
term_t new_term_float(float64 val);
term_t new_term_string(string val);
term_t new_term_bool(bool val);
term_t new_term_exp(expr_t *exp);
term_t new_term_trailer(term_t term, linked_list_t *trailer_list);
term_t new_term_anonymous(anonymous_function_t anonymous);

struct expr_node {
  enum {
    EXP_INVALID,
    //terminal symbol
    EXP_TERM,
    //expression list
    EXP_LIST,
    //binary operation
    EXP_BINARAY,
    //unary operation
    EXP_UNARY,
    // expression sequence
    //seq_exp,
    // assignment
    assign_list_exp
    // multi assignment operation
    //multi_assign_exp,
  } kind;

  union {
    term_t term;
    linked_list_t *list;
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
      linked_list_t *var_list;
      linked_list_t *exp_list;
    } assign_list_op;
    /*
    struct {
      multi_assign_op_t op;
      var_t *var;
      expr_t *exp;
    } multi_assign_op;
    */
  };
};

expr_t *new_exp_term(term_t term);
expr_t *new_exp_list(linked_list_t *list);
expr_t *new_exp_binary(operator_t op, expr_t *left, expr_t *right);
expr_t *new_exp_unary(operator_t op, expr_t *expr);

void show_expr(expr_t *exp);
void check_primitive_type(int type, term_t term);

END_DECLS /* 兼容C++编译宏 */

#endif
