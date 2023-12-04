#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: a pointer to the number..
  * @index: the index starting form 0 of the bit you want to set.
  *
  * Return: 1 if it worked ,or -1 if and error occurred.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1;

	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~mask << index;
	return (1);
}
