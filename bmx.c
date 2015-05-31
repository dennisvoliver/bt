#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef double bignum;
bignum per(bignum n, bignum r);
bignum fac(bignum n);
bignum cm(bignum n, bignum r);

/* monolithic version of bx (binomial expansion) */
/* expands (1 + z)^x accurate to the (y + 1)th term */
bignum main(int argc, char *argv[])
{
	if (argc != 4) {
		fprintf(stderr, "%s exp term x\n", argv[0]);
		return -1;
	}
	
	bignum x = atof(*++argv);
	bignum y = atof(*++argv);
	bignum z = atof(*++argv);
	bignum sum = 0.0;
	bignum d = 0;	/* the first term is the zeroth */
	while (d <= y) {
//		printf("%g\n", cm(x, d++));
		sum += pow(z, d) * cm(x, d++);
	}
	printf("%g\n", sum);
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
