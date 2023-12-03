#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: a pointer to a set of characters represent the number in binary.
  *
  * Return: the number in base 10.
  *		0 if the string is not all 0s and 1s, b is null.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) | (*b - '0');
		b++;
	}
	return (num);
}
