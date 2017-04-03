
#ifndef _KOALA_LIST_H_
#define _KOALA_LIST_H_

#include <stdlib.h>
#include <assert.h>
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
                              struct list_head *prev,
                              struct list_head *next)
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

static inline void __list_merge(struct list_head *list,
                                struct list_head *prev,
                                struct list_head *next)
{
  struct list_head *first = list->next;
  struct list_head *last = list->prev;

  first->prev = prev;
  prev->next = first;

  last->next = next;
  next->prev = last;
}

static inline void list_merge(struct list_head *to, struct list_head *from)
{
  if (!LIST_EMPTY(from))
    __list_merge(from, to, to->next);
}

static inline void list_merge_tail(struct list_head *to,
                                   struct list_head *from)
{
  if (!LIST_EMPTY(from))
    __list_merge(from, to->prev, to);
}

#define LIST_FIRST(head)  (LIST_EMPTY(head) ? NULL : (head)->next)
#define LIST_LAST(head)   (LIST_EMPTY(head) ? NULL : (head)->prev)

#define LIST_ENTRY(ptr, type, member) PARENT_STRUCT(ptr, type, member)

#define LIST_FOR_EACH(pos, head) \
  for (pos = (head)->next; pos != (head); pos = pos->next)

#define LIST_FOR_EACH_SAFE(pos, n, head) \
  for (pos = (head)->next, n = pos->next; \
       pos != (head); pos = n, n = pos->next)

#define LIST_FOR_EACH_PREV_SAFE(pos, n, head) \
 for (pos = (head)->prev, n = pos->prev; \
      pos != (head); pos = n, n = pos->prev)

#define LIST_FOR_EACH_ENTRY(pos, head, member) \
  for (pos = LIST_ENTRY((head)->next, typeof(*pos), member); \
       &pos->member != (head); \
       pos = LIST_ENTRY(pos->member.next, typeof(*pos), member))

#define LIST_FOR_EACH_ENTRY_SAFE(pos, n, head, member)         \
  for (pos = LIST_ENTRY((head)->next, typeof(*pos), member),   \
       n = LIST_ENTRY(pos->member.next, typeof(*pos), member); \
       &pos->member != (head); \
       pos = n, n = LIST_ENTRY(n->member.next, typeof(*n), member))

typedef struct linked_list
{
  struct list_head head;
  int count;
} linked_list_t;

typedef struct linked_node
{
  struct list_head node;
  void *data;
} linked_node_t;

#define LINKED_LIST_EMPTY(list) \
  LIST_EMPTY(&list->head)

#define INIT_LINKED_LIST(list)  do {  \
  INIT_LIST_HEAD(&(list)->head);      \
  (list)->count = 0;                  \
} while (0)

#define LINKED_NODE_GET_DATA(n)  \
  PARENT_STRUCT(n, linked_node_t, node)->data

#define LINKED_LIST_MERGE(to, from) do {  \
  (to)->count += (from)->count;           \
  list_merge(&(to)->head, &(from)->head); \
  INIT_LINKED_LIST(from);                 \
} while (0)

#define LINKED_LIST_MERGE_TAIL(to, from) do {   \
  (to)->count += (from)->count;                 \
  list_merge_tail(&(to)->head, &(from)->head);  \
  INIT_LINKED_LIST(from);                       \
} while (0)

static inline linked_list_t *new_linked_list()
{
  linked_list_t *list = malloc(sizeof(*list));
  INIT_LIST_HEAD(&list->head);
  list->count = 0;
  return list;
}

static inline void free_linked_list(linked_list_t *list)
{
  assert(list->count == 0);
  INIT_LIST_HEAD(&list->head);
  free(list);
}

static inline linked_node_t *new_linked_node(void *data)
{
  linked_node_t *node = malloc(sizeof(*node));
  INIT_LIST_HEAD(&node->node);
  node->data = data;
  return node;
}

static inline void free_linked_node(linked_node_t *node)
{
  INIT_LIST_HEAD(&node->node);
  free(node);
}

static inline void linked_list_add(linked_list_t *list, void *data)
{
  linked_node_t *node = new_linked_node(data);
  LIST_ADD(&list->head, &node->node);
  list->count++;
}

static inline void linked_list_add_tail(linked_list_t *list, void *data)
{
  linked_node_t *node = new_linked_node(data);
  LIST_ADD_TAIL(&list->head, &node->node);
  list->count++;
}

static inline void linked_list_remove(linked_list_t *list, linked_node_t *node)
{
  LIST_DEL(&node->node);
  list->count--;
  assert(list->count >= 0);
}

#define LINKED_LIST_FOREACH(pos, list) \
  LIST_FOR_EACH(pos, &(list)->head)

#define LINKED_LIST_FOREACH_SAFE(pos, n, list) \
  LIST_FOR_EACH_SAFE(pos, n, &(list)->head)

static inline void *linked_list_pop_first(linked_list_t *list)
{
  void *data;
  linked_node_t *node;

  if (list == null || LINKED_LIST_EMPTY(list))
    return null;

  node = PARENT_STRUCT(LIST_FIRST(&list->head), linked_node_t, node);
  data = node->data;
  linked_list_remove(list, node);
  free_linked_node(node);
  return data;
}

END_DECLS /* 兼容C++编译宏 */

#endif
