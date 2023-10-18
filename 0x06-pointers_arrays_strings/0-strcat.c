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

	for (; *src != '\0'; src++, ldest++)
	{
		*(dest + ldest) = *(src);
	}
	*(dest + ldest) = '\0';
	return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
