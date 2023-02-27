#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include "stack.h"

#define MAX_STEPS 20

typedef struct cfrac {
	bool negative;
	Stack* numbers;
	char *representation;
} contFrac;

contFrac* contFracFromNum(float realNumber);
contFrac* contFracFromStr(char *representation);
contFrac* contFracFromFrac(int numerator, unsigned denominator);

void freeContFrac(contFrac *fraction);

float realNumber(contFrac *fraction);
char* representation(contFrac *fraction);

contFrac* minus(contFrac *fraction);
contFrac* add(contFrac *first, contFrac *second);
contFrac* subtract(contFrac *minuend, contFrac *subtrahend);
