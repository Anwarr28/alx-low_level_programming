#include "main.h"
#include <ctype.h>

/**
  * rot13 - encode a string using rot13 method.
  * @a: a pointer to the string to be operated on.
  *
  * Return: the new encoded string.
  */

char *rot13(char *a);
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (a[i] == abc[j])
			{
				a[i] = rot[j];
				break;
			}
		}
	}
	return (a);
}
