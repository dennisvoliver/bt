#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef double bignum;
bignum per(bignum n, bignum r);
bignum fac(bignum n);
bignum cm(bignum n, bignum r);

/* prints the combination of x taken y, provided |x| < 1 or 0 < y <= x and y is an integer */
bignum main(int argc, char *argv[])
{
	if (argc != 3)
		return -1;
	
	bignum x = atof(*++argv);
	bignum y = atof(*++argv);
	bignum d = 0;
	while (d <= y) {
		printf("%g\n", cm(x, d++));
	}
	return 0;
}

bignum cm(bignum n, bignum r)
{	
	return per(n, r) / fac(r);
}
bignum per(bignum n, bignum r)
{
	if (r == 0)
		return 1;
	return n * per(n - 1, r - 1);
}

bignum fac(bignum n)
{
	if (n <= 1)
		return 1;
	return n * fac(n - 1);
}
