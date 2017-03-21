
#ifndef _KOALA_PACKAGE_H_
#define _KOALA_PACKAGE_H_

#include "koala_common.h"
#include "koala_list.h"
#include "koala_types.h"
#include "koala_string.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef struct package package_t;

struct package {
  string name;
  linked_list_t variable_list;
  linked_list_t type_list;
  linked_list_t function_list;
  symbol_table_t symbol_table;
};

END_DECLS /* 兼容C++编译宏 */

#endif
