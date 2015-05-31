#include <stdio.h>
#include "mydef.h"	/* for bignum type and cm() function */

/* bin: prints the coefficients of the binomial (a + b)^n */
int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("bin n\n");
		return -1;
	}
	bignum n = atoi(*++argv);
	bignum i;
	for (i = 0; i <= n; i++)
		printf("%lu ", cm(n, i));
	putchar('\n');
	return 0;
}

