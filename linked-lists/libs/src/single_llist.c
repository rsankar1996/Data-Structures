#include <stdio.h>
#include <stdlib.h>
#include "single_llist.h"

struct Node* new_node() {
  struct Node* node = (struct Node*)malloc(sizeof(struct Node));
  return node;
}

int insert(struct Node* prev, int data) {
  struct Node* node = new_node();
  if (node == NULL) {
    return -1;
  }
  node->element = data;
  node->next = prev->next;
  prev->next = node;

  return 0;
}

void display(struct Node* node) {
  while (node != NULL) {
    printf(" [%d] ", node->element);
    node = node->next;
  }
  printf("\r\n");
}
