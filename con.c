#include <stdio.h>
#include <math.h>	/* pow() */
#include <stdlib.h>	/* atof() */

/* prints x^0 * a_0 \n x^1 * a_1 \n ...a_n * x^n where x is from argv and a_n are from stdin */
int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "%s x\n", argv[0]);
		return -1;
	}
	
	double x = atof(*++argv), n = 0.0;
	float a = 1.0;
	while (scanf("%g", &a) != EOF) {
//		printf("%g %g %g %g\n", a, x, n, a * pow(x, n++));
		printf("%g\n", a * pow(x, n++));
	}
	return 0;
}
