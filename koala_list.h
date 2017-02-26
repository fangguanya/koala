
#ifndef _KOALA_LIST_H_
#define _KOALA_LIST_H_

#include <stdlib.h>
#include "koala_types.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct list_head {
  struct list_head *next;
  struct list_head *prev;
};

#define LIST_HEAD_INIT(name) {&(name), &(name)}

#define LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)

#define INIT_LIST_HEAD(head) do { \
  (head)->next = (head); (head)->prev = (head); \
} while (0)

#define LIST_INLIST(node)  (((node)->next != node) ? true : false)

#define LIST_EMPTY(head)   (((head)->next == head) ? true : false)

static inline void __list_add(struct list_head *node,
  struct list_head *prev, struct list_head *next)
{
  node->next = next;
  node->prev = prev;
  prev->next = node;
  next->prev = node;
}

#define LIST_ADD(head, node) __list_add(node, head, (head)->next)
#define LIST_ADD_TAIL(head, node) __list_add(node, (head)->prev, head)

static inline void __list_del(struct list_head *prev, struct list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

#define LIST_DEL(node) do { \
  __list_del((node)->prev, (node)->next); INIT_LIST_HEAD(node); \
} while (0)

#define LIST_FIRST(head)  (LIST_EMPTY(head) ? NULL : (head)->next)
#define LIST_LAST(head)   (LIST_EMPTY(head) ? NULL : (head)->prev)

#define LIST_ENTRY(ptr, type, member) PARENT_STRUCT(ptr, type, member)

#define LIST_FOR_EACH(pos, head) \
  for (pos = (head)->next; pos != (head); pos = pos->next)

#define LIST_FOR_EACH_SAFE(pos, n, head) \
  for (pos = (head)->next, n = pos->next; \
       pos != (head); pos = n, n = pos->next)

#define LIST_FOR_EACH_ENTRY(pos, head, member) \
  for (pos = LIST_ENTRY((head)->next, typeof(*pos), member); \
       &pos->member != (head); \
       pos = LIST_ENTRY(pos->member.next, typeof(*pos), member))

#define LIST_FOR_EACH_ENTRY_SAFE(pos, n, head, member)         \
  for (pos = LIST_ENTRY((head)->next, typeof(*pos), member),   \
       n = LIST_ENTRY(pos->member.next, typeof(*pos), member); \
       &pos->member != (head); \
       pos = n, n = LIST_ENTRY(n->member.next, typeof(*n), member))

static inline struct list_head *new_list()
{
  struct list_head *list = malloc(sizeof(*list));
  INIT_LIST_HEAD(list);
  return list;
}

static inline void list_free(struct list_head *list)
{
  INIT_LIST_HEAD(list);
  free(list);
}

END_DECLS /* 兼容C++编译宏 */

#endif
