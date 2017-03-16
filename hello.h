/*
 * Combining files into library using ar tool:
 * ar cr libhello.a hello_fn.o bye_fn.o
 * cr stands for "create and replace"
 * To see which object files were used to create
 * the library run: ar t libhello.a
 * */

void hello(const char * name);
void bye(void);
