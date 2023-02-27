CC := gcc
CFLAGS := -g -Wall -Werror

STACKDIR := ./Stack/
OBJDIR := ./Objects/
TESTDIR := ./Tests/

## Objects

$(OBJDIR)stack.o: $(STACKDIR)stack.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)testStack.o: $(TESTDIR)testStack.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)contFrac.o: contFrac.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)testContFrac.o: $(TESTDIR)testStack.c
	$(CC) $(CFLAGS) -c $< -o $@

## Tests

tests: $(TESTDIR)testStack $(TESTDIR)testContFrac

$(TESTDIR)testStack: $(OBJDIR)testStack.o $(OBJDIR)stack.o
	$(CC) $(CFLAGS) $^ -o $@

$(TESTDIR)testContFrac: $(OBJDIR)testContFrac.o $(OBJDIR)stack.o
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm -f $(OBJDIR)*
