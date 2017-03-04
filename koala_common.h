
#ifndef _KOALA_COMMON_H_
#define _KOALA_COMMON_H_

#ifndef false
  #define false 0
#endif

#ifndef true
  #define true  (!false)
#endif

#ifdef __cplusplus
  #define null  (0L)
#else /* !__cplusplus */
  #define null  ((void *)0)
#endif /* !__cplusplus */

#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#ifdef __compiler_offsetof
  #define OFFSETOF(TYPE,MEMBER) __compiler_offsetof(TYPE,MEMBER)
#else
  #define OFFSETOF(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#endif

#define PARENT_STRUCT(ptr, type, member) ({ \
  const typeof( ((type *)0)->member ) *__mptr = (ptr); \
  (type *)( (char *)__mptr - OFFSETOF(type,member) );})

/* Count the number of elements in an array. */
#define NR_ELTS(arr)  (sizeof(arr) / sizeof((arr)[0]))

/* Guard C code in headers, while including them from C++ */
#ifdef  __cplusplus
  #define BEGIN_DECLS  extern "C" {
  #define END_DECLS    }
#else
  #define BEGIN_DECLS /* empty */
  #define END_DECLS   /* empty */
#endif /* __cplusplus */

#endif
