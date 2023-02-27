#include "contFrac.h"

void main() {
	contFrac *fraction = contFracFromNum(1.5);
	printf("%s\n", fraction->representation);
	freeContFrac(fraction);
}
