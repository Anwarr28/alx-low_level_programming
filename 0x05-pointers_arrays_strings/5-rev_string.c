#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: the string to be reversed.
  *
  * Return: Nothing.
  */

void rev_string(char *s)
{
	int i = 0, len;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
