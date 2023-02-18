#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define MAX_STEPS 20

typedef struct cfrac {
	bool negative;
	unsigned int *numbers;
	unsigned short int numberOfSteps;
	char *representation;
} contFrac;

contFrac* contFracFromNum(float realNumber);
contFrac* ContFracFromStr(char *representation);
contFrac* contFracFromFrac(int numerator, unsigned int denominator);

void freeContFrac(contFrac *fraction);

float realNumber(contFrac *fraction);
char* representation(contFrac *fraction);

contFrac* minus(contFrac *fraction);
contFrac* add(contFrac *first, contFrac *second);
contFrac* subtract(contFrac *minuend, contFrac *subtrahend);
