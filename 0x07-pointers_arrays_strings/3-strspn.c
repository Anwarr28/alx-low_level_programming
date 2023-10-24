#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: the main string to be scaned.
  * @accept: the stirng containing the chars to match in s.
  *
  * Return: the number of bytes in the initeal segment of s
  *		which consist only of bytes from accept.
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, len = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
		s++;
	}
	return (len);
}
