
#ifndef _KOALA_STRING_H_
#define _KOALA_STRING_H_

#include "koala_common.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef struct string {
  char *val;
  int len;
} string;

string new_string(char *str);
void init_string_system();

END_DECLS /* 兼容C++编译宏 */

#endif
