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
	int ldest = strlen(dest);

	for (; *src != '\0'; src++, ldest++)
	{
		*(dest + ldest) = *(src);
	}
	*(dest + ldest) = '\0';
	return (dest);
}
