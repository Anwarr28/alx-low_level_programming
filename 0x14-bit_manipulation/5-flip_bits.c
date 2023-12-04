#include "main.h"

/**
  * flip_bits - calculate the number of bits you would need
  *		to flip to get from one number to another.
  * @n: the first number.
  * @m: the second number.
  *
  * Return: the number of bits needed.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	return (count);
}
