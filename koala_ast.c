
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "koala_ast.h"

simple_string_t *new_simple_string(string value)
{
  simple_string_t *str = malloc(sizeof(*str));
  str->value = value;
  return str;
}

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
  "struct", "interface", "function", "array"
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
