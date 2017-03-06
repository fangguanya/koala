
#ifndef _KOALA_TYPES_H_
#define _KOALA_TYPES_H_

#include "koala_common.h"

BEGIN_DECLS /* 兼容C++编译宏 */

typedef signed   char       int8;
typedef unsigned char       uint8;
typedef signed   short      int16;
typedef unsigned short      uint16;
typedef signed   int        int32;
typedef unsigned int        uint32;
typedef signed   long long  int64;
typedef unsigned long long  uint64;
typedef float               float32;
typedef double              float64;
typedef int                 bool;

typedef struct string {
  char *val;
} string;

#define STRING_SET(string, str) do {  \
  (string).val = (str);               \
} while (0)

#define STRING_GET(string) ((string).val)

#define KOALA_TYPE_UINT8    1
#define KOALA_TYPE_UINT16   2
#define KOALA_TYPE_UINT32   3
#define KOALA_TYPE_UINT64   4

#define KOALA_TYPE_INT8     5
#define KOALA_TYPE_INT16    6
#define KOALA_TYPE_INT32    7
#define KOALA_TYPE_INT64    8

#define KOALA_TYPE_FLOAT32  9
#define KOALA_TYPE_FLOAT64  10

#define KOALA_TYPE_BOOL     11
#define KOALA_TYPE_STRING   12

#define KOALA_TYPE_STRUCT     20
#define KOALA_TYPE_INTERFACE  21
#define KOALA_TYPE_FUNC       22

END_DECLS /* 兼容C++编译宏 */

#endif
