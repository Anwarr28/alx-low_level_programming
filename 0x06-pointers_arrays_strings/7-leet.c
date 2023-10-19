#include "main.h"

/**
  * leet - capitalize all words of a stirng.
  * @a: a pointer to the stirng to be encoded.
  *
  * Return: a pointer to the new string.
  */

char *leet(char *a)
{
	char leet[] = "AaEeOoTtLl";
	char rplce[] = "4433007711";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (a[i] == leet[j])
				a[i] = rplce[i];
		}
	}
	return (a);
}
