#include "main.h"

/**
  * _strncpy - copy a stirng.
  * @dest: the destenation where the string should be copied
  * @src: the string to be copied.
  * @n: the number of chars should be copied from src.
  *
  * Return: apointer to the destenation where the string have been copeid.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);

}
