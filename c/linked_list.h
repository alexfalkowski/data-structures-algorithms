#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>

// linked_list_element_t represents a node in a linked list.
typedef struct linked_list_element_t {
  struct linked_list_element_t* previous;
  struct linked_list_element_t* next;
  void* value;
  struct linked_list_t* list;
};

// linked_list_t represents a double linnked list.
typedef struct linked_list_t {
  struct linked_list_element_t* first;
  struct linked_list_element_t* last;
  uint64_t count;
};

// linked_list_new creates a new linked list.
struct linked_list_t* linked_list_new(void);

// linked_list_dispose frees up the linked list.
void linked_list_dispose(struct linked_list_t* list);

#endif
