#include "single_llist.h"
#include <stdio.h>

int main() {
  struct Node* head = new_node();
  struct Node* first = new_node();
  struct Node* second = new_node();

  head->element = 12;
  first->element = 10;
  second->element = 20;

  head->next = first;
  first->next = second;
  second->next = NULL;

  display(head);

  if (insert(first, 15) != 0) {
    printf("Insertion failed\r\n");
  }

  display(head);

  return 0;
}
