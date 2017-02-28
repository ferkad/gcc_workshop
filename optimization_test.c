/*
 * gcc -Wall optimization_test.c + one listed below:
 * -O0 param: no optimization (default option)
 * -O1 param: perform optimization which does not 
 *  require any speed-space tradeoffs and does not 
 *  increase compilation time and memory usage
 * -O2 param: O1 + additional optimizations including
 *  scheduling. Does not increase output file size but
 *  require more compilation time and memory
 * -O3 param: more expensive optimization including 
 *  function inlining. May increase output file size
 *  but it is also possible to make a program run
 *  slower
 * -funroll-loops param: unroll for loops. 
 *  Increase speed and size.
 * -Os param: enables most of -O2 optimization and
 *  perform further action to reduce code size
 * */
#include <stdio.h>

double powern(double d, unsigned n)
{
	double x  = 1.0;
	unsigned j;

	for (j = 1; j <=n; j++)
	{
		x *= d;
	}
	return x;
}

int main(void)
{
	double sum = 0.0;
	unsigned i;

	for (i = 1; i <= 600000000; i++)
	{
		sum += powern(i, i % 5);
	}
	printf("sum = %g\n", sum);
	return 0;
}
