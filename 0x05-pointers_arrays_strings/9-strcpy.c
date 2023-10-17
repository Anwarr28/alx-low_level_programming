#include "main.h"

/**
  * _strcpy - copies the string (src) to (dest).
  * @src: a pointer to the sting to be copied.
  * @dest: a pointer to the buffer the string will be copied to.
  *
  * Return: a pointer to dest.
  */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(src + len))
		len++;

	while (i < len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
