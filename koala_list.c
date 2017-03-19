
#include "koala_list.h"

linked_list_t *linked_list_new()
{
  linked_list_t *list = malloc(sizeof(*list));
  INIT_LIST_HEAD(&list->head);
  list->count = 0;
  return list;
}

void linked_list_free(linked_list_t *list)
{
  INIT_LIST_HEAD(&list->head);
  free(list);
}

linked_node_t *linked_node_new(void *data)
{
  linked_node_t *node = malloc(sizeof(*node));
  INIT_LIST_HEAD(&node->node);
  node->data = data;
  return node;
}

void linked_node_free(linked_node_t *node)
{
  INIT_LIST_HEAD(&node->node);
  free(node);
}

void linked_list_add_head(linked_list_t *list, void *data)
{
  linked_node_t *node = linked_node_new(data);
  LIST_ADD(&list->head, &node->node);
  list->count++;
}

void linked_list_add_tail(linked_list_t *list, void *data)
{
  linked_node_t *node = linked_node_new(data);
  LIST_ADD_TAIL(&list->head, &node->node);
  list->count++;
}

void linked_list_remove(linked_list_t *list, linked_node_t *node)
{
  LIST_DEL(&node->node);
  list->count--;
  assert(list->count >= 0);
}
