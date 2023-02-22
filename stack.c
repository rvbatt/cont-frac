#include "stack.h"

Stack* createStack() {
	Stack* stack = malloc(sizeof(Stack));
	stack->top = NULL;
	stack->size = 0;
	return stack;
}

void freeNodes(Node* node) {
	if (node == NULL) return;

	freeNodes(node->next);
	free(node->data);
	free(node);
}

void freeStack(Stack* stack) {
	freeNodes(stack->top);
	free(stack);
}

void push(Stack* stack, Item item) {
	Node* newNode = malloc(sizeof(Node));
	newNode->data = malloc(sizeof(Item));
	*(newNode->data) = item;
	newNode->next = stack->top;

	stack->top = newNode;
	(stack->size)++;
}

Item pop(Stack* stack) {
	Item popedItem = *(stack->top->data);
	Node* nextNode = stack->top->next;

	free(stack->top->data);
	free(stack->top);

	stack->top = nextNode;
	(stack->size)--;
	return popedItem;
}

