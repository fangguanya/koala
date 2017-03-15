
#ifndef _KOALA_STACK_H_
#define _KOALA_STACK_H_

#include "koala_list.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct stack {
  struct list_head base;
};

#define STACK_INIT(name)  {LIST_HEAD_INIT(name)}
#define STACK(name) struct stack name = STACK_INIT(name)
#define INIT_STACK(stack) do { \
    INIT_LIST_HEAD(&stack->base); \
} while (0)

#define STACK_EMPTY(stack)        LIST_EMPTY(&stack->base)
#define STACK_PUSH(stack, node)   LIST_ADD_TAIL(stack, node)

static inline struct list_head *__stack_pop(struct stack *stack)
{
  struct list_head *node;

  if (LIST_EMPTY(&stack->base))
    return null;

  node = LIST_LAST(&stack->base);
  LIST_DEL(node);
  return node;
}

#define STACK_POP(stack)          __stack_pop(stack)
#define STACK_PEEK(stack)         LIST_FIRST(&(stack)->base)

END_DECLS /* 兼容C++编译宏 */

#endif
