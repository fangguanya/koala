
#ifndef _KOALA_IDENT_H_
#define _KOALA_IDENT_H_

#include "koala_list.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef struct {
  struct list_head node;
  string name;
} ident_t;

typedef struct {
  struct list_head list;
  int count;
} ident_list_t;

ident_t *new_ident(string name);

ident_list_t *new_ident_list();

END_DECLS /* 兼容C++编译宏 */

#endif
