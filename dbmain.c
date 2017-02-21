/*
 * gcc -I/opt/gdbm-1.12/include -L/opt/gdbm-1.12/lib
 * dbmaic.c -lgdbm
 * -I param: points to the location where .h file is stored; 
 *  whitout it compilation process fails at the line 
 *  including gdbm.h
 *  Insted of this param path to the folder can be set in
 *  C_INCLUDE_PATH env variable:
 *  $ C_INCLUDE_PATH+=:/opt/gdbm-1.12/include
 *  $ export C_INCLUDE_PATH
 *  -L param: informs linker about location of gdbm library
 *  Insted of this param path to the folder can be set in
 *  LIBRARY_PATH env variable (needs to be export)
 *  -l param: copies objects from library which are on 
 *  the list of undefined referencies. List is created
 *  during compilation of previous files so the order of 
 *  the files in gcc command matters
 *  Additionally, LD_LIBRARY_PATH needs to include path to
 *  shared library or "-static" param can be added to gcc
 *  but executable will be much bigger
 */
#include <stdio.h>
#include <gdbm.h>

int main(void)
{
	GDBM_FILE dbf;
	datum key = { "testkey", 7}; /*key, length */
	datum value = {"testvalue", 9}; /* value, length */

	printf("Storing key-value pair... ");
	dbf = gdbm_open("test", 0, GDBM_NEWDB, 0644,0);
	gdbm_store(dbf, key, value, GDBM_INSERT);
	gdbm_close(dbf);
	printf("done.\n");
	return 0;
}
