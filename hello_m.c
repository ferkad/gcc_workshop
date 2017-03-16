/*
 * Compiling and linking with libhello.a
 * gcc -Wall hello_m.c libhello.a -o hello
 * or
 * gcc -Wall -L . main.c -lhello -o hello
 * -L needed to add the current directory
 *  to the library search path.
 * */

#include "hello.h"

int main(void)
{
	hello("everyone");
	bye();
	return 0;
}
