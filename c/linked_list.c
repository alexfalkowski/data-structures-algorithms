#include "linked_list.h"

#include <stddef.h>

struct linked_list_t* linked_list_new(void) {
  struct linked_list_t* list =
      (struct linked_list_t*)malloc(sizeof(struct linked_list_t));

  list->first = NULL;
  list->last = NULL;
  list->count = 0;

  printf("linked_list_new");

  return list;
};

void linked_list_dispose(struct linked_list_t* list) {
  printf("linked_list_dispose");
  free(list);
}
