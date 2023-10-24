#include "main.h"

/**
  * _memcpy - copy memory area.
  * @dest: the string to be operated on.
  * @src: the string to be copied.
  * @n: the number of bytes to be copied from src to dest.
  *
  * Return: a pointer to dest after being edited.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
