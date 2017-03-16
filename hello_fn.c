/*
 * One of two files combined into library libhello.a
 *  */
#include <stdio.h>
#include "hello.h"

void hello(const char * name)
{
	printf("Hello, %s\n", name);
}
