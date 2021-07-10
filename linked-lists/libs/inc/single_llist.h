#ifndef SINGLE_LLIST_H_
#define SINGLE_LLIST_H_

struct Node {
  int element;
  struct Node* next;
};

struct Node* new_node();
int insert(struct Node* prev, int data);
int new_head(struct Node* curr, int data);
void display(struct Node* node);

#endif
