#include "main.h"

/**
  * string_toupper - change all the lowercase letter to uppercase.
  * @a: the string to be operated on.
  *
  * Return: a pointer to the new string.
  */

char *string_toupper(char *a)
{
	int i, size = 0;

	while (a[size])
		size++;
	for (i = 0; i < size; i++)
	{
		if (a[i] <= 'z' && a[i] >= 'a')
			a[i] -= 32;
	}
	return (a);
}
