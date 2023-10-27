#include "main.h"

/**
  * _strncat - concatenate two str but using at most n bytes form the sd str
  * @dest: the first string.
  * @src: the second string.
  * @n: number of bytes to be taken from sd str.
  *
  * Return: a pointer to the resulting string dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int ldest = _strlen(dest);
	int lsrc = _strlen(src);
	int len;

	if (n > lsrc)
		n = lsrc;

	len = ldest + n;
	for (; ldest < len; ldest++)
	{
		*(dest + ldest) = *(src);
		src++;
	}
	return (dest);
}
