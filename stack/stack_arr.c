#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int* arr;
  int top;
  int capacity;
}Stack;

Stack* create(int capacity) {
  Stack* stack = (Stack*)malloc(sizeof(Stack));

  stack->capacity = capacity;
  stack->top = -1;
  stack->arr = (int*)malloc(capacity * (sizeof(int)));

  printf("INFO: Stack created with capacity [%d]\r\n", stack->capacity);

  return stack;
}

int isFull(Stack* stack) {
  int stat = -1;

  if (stack->top == (stack->capacity - 1)) {
    stat = 0;
  }

  return stat;
}

int isEmpty(Stack* stack) {
  int stat = -1;

  if (stack->top == -1) {
    stat = 0;
  }

  return stat;
}

int push(Stack* stack, int data) {
  if (isFull(stack) == 0) {
    printf("ERR: %d push failed, stack full!\r\n", data);
    return -1;
  }

  stack->arr[++stack->top] = data;
  printf("INFO: Push data [%d] stack top at [%d]\r\n", data, stack->top);
  return 0;
}

int pop(Stack* stack, int* data) {
  if (isEmpty(stack) == 0) {
    printf("ERR: data pop failed, Empty stack!\r\n");
    return -1;
  }

  *data = stack->arr[stack->top--];
  printf("INFO: Pop data [%d] stack top at [%d]\r\n", *data, stack->top);
  return 0;
}

int main() {
  Stack* myStack = create(5);
  int data;
  push(myStack, 10);
  push(myStack, 20);
  push(myStack, 30);
  push(myStack, 40);
  push(myStack, 50);
  push(myStack, 60);
  push(myStack, 70);
  pop(myStack, &data);
  push(myStack, 60);
  push(myStack, 70);
  pop(myStack, &data);
  pop(myStack, &data);
  push(myStack, 80);
  push(myStack, 90);
  push(myStack, 100);
  push(myStack, 110);

  return 0;
}
