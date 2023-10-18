#include "main.h"

/**
  * _strcat - concatenate two strings.
  * @dest: the first string.
  * @src: the second string.
  *
  * Return: a pointer to the new stirng.
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
		i++;
	for (; *src != '\0'; src++, i++)
	{
		*(dest + i) = *(src);
	}
	*(dest + i) = '\0';
	return (dest);
}
