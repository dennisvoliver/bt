#include <stdio.h>

/* sums all numbers from the standard input */
int main(void)
{
	double sum;
	float op;
	while(scanf("%g", &op) != EOF)
		sum += op;
	printf("%g\n", sum);
}
