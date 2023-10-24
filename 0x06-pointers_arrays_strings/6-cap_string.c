#include "main.h"

/**
  * cap_string - function cpitalize all words of a string.
  * @str: the string to be operated on.
  *
  * Return: the new string s.
  */

char *cap_string(char *str)
{
	char del[] = " \t\n,;.!?\"(){}";
	char *s = str;
	int i;

	if (*s < 'z' && *s > 'a')
		*s -= 32;

	for (; *s != '\0'; s++)
	{
		for (i = 0; del[i] != '\0'; i++)
		{
			if (*s == del[i] && *(s + 1) < 'z' && *(s + 1) > 'a')
				*(s + 1) -= 32;
			else
				continue;
		}
	}
	return (str);
}
