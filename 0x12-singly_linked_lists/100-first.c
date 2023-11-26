#include "lists.h"

/**
  * pre_main - attribute fucntion prints a string before main.
  */
void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
