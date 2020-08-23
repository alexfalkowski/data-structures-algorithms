#include <stdio.h>

#include "linked_list.h"

int main() {
  struct linked_list_t* list = linked_list_new();

  linked_list_dispose(list);

  return 0;
}
