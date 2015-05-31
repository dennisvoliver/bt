#include <stdio.h>
#include <mydef.h>

/* cm: returns the combination of n taken r at a time, returns 0 if input is invalid (n < r) */
bignum cm(bignum n, bignum r)
{
	if (r == 0)
		return 1;
	return (n * cm(n - 1, r - 1)) / r;
}
