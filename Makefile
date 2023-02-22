CC=gcc

lib: contFrac.h contFrac.c
	$(CC) -c -g contFrac.c

testFrac: testContFrac.c lib
	$(CC) -c -g testContFrac.c
	$(CC) -o testContFrac contFrac.o testContFrac.o

stack: stack.h stack.c
	$(CC) -c -g stack.c

testStack: testStack.c stack
	$(CC) -c -g testStack.c
	$(CC) -o testStack stack.o testStack.o

.PHONY: clean

clean:
	rm *.o
