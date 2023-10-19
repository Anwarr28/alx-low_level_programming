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
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (a[i] == leet[j])
			{
				if (leet[j] == 'a' || leet[j] == 'A')
					a[i] = '4';
				if (leet[j] == 'e' || leet[j] == 'E')
					a[i] = '3';
				if (leet[j] == 'o' || leet[j] == 'O')
					a[i] = '0';
				if (leet[j] == 't' || leet[j] == 'T')
					a[i] = '7';
				if (leet[j] == 'l' || leet[j] == 'L')
					a[i] = '1';
				break;
			}
		}
	}
	return (a);
}
