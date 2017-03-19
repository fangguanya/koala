
#ifndef _KOALA_ABSTRACT_SYNTAX_TREE_H_
#define _KOALA_ABSTRACT_SYNTAX_TREE_H_

#include "koala_common.h"
#include "koala_list.h"
#include "koala_types.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef enum {
  OP_TIMES, OP_DIVIDE, OP_MOD,
  plus_op, minus_op,
  left_shift_op, right_shift_op,
  gt_op, ge_op, lt_op, le_op,
  eq_op, neq_op,
  binary_and_op, binary_or_op, binary_xor_op,
  logic_and_op, logic_or_op
} binary_op_t;

typedef enum {
  plus_assign_op, minus_assign_op, times_assign_op, divide_assign_op,
} multi_assign_op_t;

typedef struct var var_t;
typedef struct expr expr_t;

struct var {
  enum {
    VAR_INVALID, VAR_SIMPLE, VAR_FIELD, VAR_SUBSCRIPT
  } kind;

  union {
    string simple;
    struct {
      var_t *var;
      string simple;
    } field;
    struct {
      var_t *var;
      expr_t *exp;
    } subscript;
  };
};

struct expr {
  enum {
    invalid_exp,
    //terminal symbol
    var_exp, uint_exp, sint_exp, float_exp, bool_exp, string_exp,
    //binary operation
    binary_op_exp,
    // call operation
    call_exp,
    // expression sequence
    //seq_exp,
    // assignment
    assign_list_exp
    // multi assignment operation
    //multi_assign_exp,
  } kind;

  union {
    var_t var;
    uint64 uint_num;
    int64 sint_num;
    double float_num;
    int bool_val;
    string str;
    struct {
      binary_op_t op;
      expr_t *left;
      expr_t *right;
    } binary_op;
    struct {
      string func;
      linked_list_t args;
    } call_op;
    //linked_list_t *seq;
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
  } u;
};

typedef struct type_info type_info_t;
typedef struct name_type name_type_t;
typedef struct array_type array_type_t;
typedef struct struct_type struct_type_t;
typedef struct intf_type intf_type_t;
typedef struct func_proto_type func_proto_type_t;
typedef struct var_decl var_decl_t;
typedef struct func_decl func_decl_t;
typedef struct type_decl type_decl_t;
typedef struct simple_string simple_string_t;

struct type_info {
  int kind;
  void *attr;
};

struct name_type {
  string name;
  type_info_t type;
};

struct array_type {
  int size;
  type_info_t *base_type;
};

struct struct_type {
  linked_list_t *name_type_list;
};

struct intf_type {
  linked_list_t *name_type_list;
};

struct func_proto_type {
  linked_list_t *args;
  linked_list_t *results;
};

struct var_decl {
  linked_list_t *var_list;
  type_info_t *type;
  linked_list_t *init_list;
};

struct func_decl {
  string name;
  func_proto_type_t *type_info;
  linked_list_t *body;
};

struct type_decl {
  /*
  enum {
    invalid_decl, struct_decl, intf_decl, func_proto_decl, name_decl
  } kind;
  */
};

struct simple_string {
  string value;
};

/* function prototype */
simple_string_t *new_simple_string(string value);
type_info_t *new_type_info(int kind, void *attr);
array_type_t *new_array_type(int size, type_info_t *base_type);
func_proto_type_t *new_func_proto_type(linked_list_t *args,
                                       linked_list_t *results);

var_t *new_simple_var(string name);
var_decl_t *new_var_decl(linked_list_t *var_list, type_info_t *type,
                         linked_list_t *init_list);

END_DECLS /* 兼容C++编译宏 */

#endif
