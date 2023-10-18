#include "main.h"
#include <string.h>

/**
  * _strcat - concatenate two strings.
  * @dest: the first string.
  * @src: the second string.
  *
  * Return: a pointer to the new stirng.
  */

char *_strcat(char *dest, char *src)
{
	int ldest = strlen(dest);
	int lsrc = strlen(src);
	int len = ldest + lsrc;

	for (; ldest < len; ldest++)
	{
		*(dest + ldest) = *(src);
		src++;
	}
	return (dest);
}
