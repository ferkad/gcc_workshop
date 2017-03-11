/*
 * Wuninitialized param : warns about variables that are read
 * without being initialized (included in Wall). Needs to be
 * run with optimization turned on.
 * gcc -Wall -c uninit.c : no warning 
 * gcc -Wall -O2 -c uninit.c : warning returned
 * */

int sign (int x)
{
	int s;

	if (x > 0)
	{
		s = 1;
	}
	else if (x < 0)
	{
		s = -1;
	}
	return s;
}
