#include "main.h"

/**
  * cap_string - capitalize all words of a stirng.
  * @a: a pointer to the stirng to be capitalized.
  *
  * Return: a pointer to the new string.
  */

char *cap_string(char *a)
{
	char del[] = " \n,;.!?\"(){}\t";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; del[j] != '\0'; j++)
		{
			if (a[i] == del[j])
			{
				if(a[i + 1] <= 'z' && a[i + 1] > 'a')
					a[i + 1] -= 32;
				else
					break;
			}
		}
	}
	return (a);
}
