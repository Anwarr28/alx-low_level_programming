#include "main.h"

/**
  * _memset - fills the first n bytes of string s with constant byte b.
  * @s: the string to be operated on.
  * @b: the character to be used.
  * @n: the number of bytes to be filled.
  *
  * Return: a pointer to the memory area s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
