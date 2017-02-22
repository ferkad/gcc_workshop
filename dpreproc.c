/*
 * gcc -Wall -DTEST -DNUM=100 dtest.c
 * -D param: defines preprocessor macro from the command line
 * If value is not given to macro gcc assume it is 1 
 * */
#include <stdio.h>

int main(void)
{
#ifdef TEST
	printf("Test mode\n");
#endif
	printf("Running...\n");
	printf("Value of NUM is %d\n", NUM);
	return 0;
}
