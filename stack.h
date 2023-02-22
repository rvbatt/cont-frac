#include <stdlib.h>

/* The idea is to change this type in the client code later */
typedef unsigned Item;

typedef struct _Node {
	Item data;
	struct _Node *next;
} Node;

typedef struct _Stack {
	Node *top;
	unsigned *size;
} Stack;

Stack createStack();
void freeStack(Stack stack);

void push(Stack stack, Item item);
Item pop(Stack stack);

unsigned sizeOfStack(Stack stack);

