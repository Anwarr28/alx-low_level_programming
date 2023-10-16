#include "main.h"

/**
  * swap_int - swap two integers
  * @a: the first int
  * @b: the second int
  *
  * Return: nothing.
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
