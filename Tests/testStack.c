#include "../Stack/stack.h"

void printStack(Stack* stack);

int main(int argc, char* argv[]) {
	Item numbers[] = {1,2,3};
	Item popedNumber;
	Stack* stack = createStack();
	printStack(stack);

	push(stack, numbers[0]);
	printStack(stack);

	push(stack, numbers[1]);
	printStack(stack);
	
	popedNumber = pop(stack);
	printStack(stack);
	printf("Poped number: %u\n", popedNumber);

	push(stack, numbers[2]);
	printStack(stack);

	freeStack(stack);

	return 0;
}

void printStack(Stack* stack) {
	Node *node;

	if (stack == NULL) {
		printf("Null stack.\n");
		return;
	}

	if (stack->top == NULL) {
		printf("Empty stack.\n");
		return;
	}

	printf("Size: %u\n", stack->size);

	for (node = stack->top; node != NULL; node = node->next)
		printf("%u -> ", *(node->data));

	printf("NULL\n");
}

