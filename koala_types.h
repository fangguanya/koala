
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
typedef unsigned char       byte;

#define TYPE_INT8         1
#define TYPE_INT16        2
#define TYPE_INT32        3
#define TYPE_INT64        4
#define TYPE_UINT8        5
#define TYPE_UINT16       6
#define TYPE_UINT32       7
#define TYPE_UINT64       8
#define TYPE_FLOAT32      9
#define TYPE_FLOAT64      10
#define TYPE_BOOL         11
#define TYPE_STRING       12
#define TYPE_ROOT_OBJECT  13

END_DECLS /* 兼容C++编译宏 */

#endif
