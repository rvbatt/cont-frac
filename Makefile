CC=gcc

contFrac: contFrac.h contFrac.c stack
	$(CC) -c -g contFrac.c

testFrac: testContFrac.c contFrac stack
	$(CC) -c -g testContFrac.c
	$(CC) -o testContFrac contFrac.o testContFrac.o stack.o

stack: stack.h stack.c
	$(CC) -c -g stack.c

testStack: testStack.c stack
	$(CC) -c -g testStack.c
	$(CC) -o testStack stack.o testStack.o

.PHONY: clean

clean:
	rm *.o
