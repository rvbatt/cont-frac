CC=gcc

lib: contFrac.h contFrac.c
	$(CC) -c -g contFrac.c

test: testContFrac.c lib
	$(CC) -c -g testContFrac.c
	$(CC) -o testContFrac contFrac.o testContFrac.o

.PHONY: clean

clean:
	rm *.o
