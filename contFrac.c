#include "contFrac.h"

contFrac* allocContFrac(unsigned short int numberOfSteps) {
	int numberOfChars = 2 * (numberOfSteps + 1);

	contFrac *fraction = malloc(sizeof(contFrac));
	fraction->numbers = createStack();
	fraction->representation = malloc(numberOfChars * sizeof(char));

	return fraction;
}

void freeContFrac(contFrac *fraction) {
	freeStack(fraction->numbers);
	free(fraction->representation);
	free(fraction);
}

contFrac* contFracFromNum(float realNumber) {
	contFrac *fraction = allocContFrac(MAX_STEPS / 2);
	sprintf(fraction->representation, "%f", realNumber);
	return fraction;
}

contFrac* contFracFromStr(char* representation);
contFrac* contFracFromFrac(int numerator, unsigned int denominator);

float realNumber(contFrac *fraction);
char* representation(contFrac *fraction);

contFrac* minus(contFrac *fraction);
contFrac* add(contFrac *first, contFrac *second);
contFrac* subtract(contFrac *minuend, contFrac *subtrahend);
