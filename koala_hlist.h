
#ifndef _KOALA_HLIST_H_
#define _KOALA_HLIST_H_

#include "koala_types.h"

BEGIN_DECLS /* 兼容C++编译宏 */

struct hlist_node {
  struct hlist_node *next;
  struct hlist_node **pprev;
};

struct hlist_head {
  struct hlist_node *first;
};

#define HLIST_HEAD_INIT(name) {null}

#define HLIST_HEAD(name) hlist_head_t name = HLIST_HEAD_INIT(name);

#define INIT_HLIST_HEAD(head) do {\
  (head)->first = null; \
} while (0)

#define INIT_HLIST_NODE(node) do {\
  (node)->next = null; (node)->pprev = null; \
} while (0)

#define HLIST_FIRST(head)   ((head)->first)
#define HLIST_NEXT(node)    ((node)->next)
#define HLIST_PREV(node)    ((node)->prev)

#define HLIST_UNHASHED(node) ((node)->pprev == null ? true : false)

#define HLIST_EMPTY(head)    ((head)->first == null ? true : false)

#define HLIST_REMOVE(node) do {                 \
  if ((node)->pprev) {                          \
    struct hlist_node *next = (node)->next;     \
    struct hlist_node **pprev = (node)->pprev;  \
    *pprev = next;                              \
    if (next) next->pprev = pprev;              \
    INIT_HLIST_NODE(node);                      \
  }                                             \
} while (0)

#define HLIST_ADD(head, node) do {              \
  struct hlist_node *first = (head)->first;     \
  (node)->next = first;                         \
  if (first) first->pprev = &(node)->next;      \
  (head)->first = (node);                       \
  (node)->pprev = &(head)->first;               \
} while (0)

#define HLIST_ENTRY(ptr, type, member) PARENT_STRUCT(ptr, type, member)

#define HLIST_FOR_EACH(pos, head) \
  for (pos = (head)->first; pos; pos = (pos)->next)

#define HLIST_FOR_EACH_SAFE(pos, n, head) \
  for (pos = (head)->first; pos && ({n = pos->next; 1;}); pos = n)

END_DECLS /* 兼容C++编译宏 */

#endif
