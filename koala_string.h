
#ifndef _KOALA_STRING_H_
#define _KOALA_STRING_H_

BEGIN_DECLS /* 兼容C++编译宏 */

typedef struct string {
  char *val;
} string;

#define STRING_SET(str, value) do {  \
  (str).val = (value);               \
} while (0)

#define STRING_GET(str) ((str).val)

END_DECLS /* 兼容C++编译宏 */

#endif
