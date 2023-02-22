#include <stdlib.h>
#include <stdio.h>

/* The idea is to change this type when importing the library */
typedef unsigned Item;

typedef struct _Node {
	Item* data;
	struct _Node* next;
} Node;

typedef struct _Stack {
	Node* top;
	unsigned size;
} Stack;

Stack* createStack();
void freeStack(Stack* stack);

void push(Stack* stack, Item item);
Item pop(Stack* stack);

