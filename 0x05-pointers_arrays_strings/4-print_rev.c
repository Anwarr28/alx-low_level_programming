#include "main.h"

/**
  * print_rev - print string in reverse.
  * @s: the string to be reversed.
  *
  * Retrun: Nothing.
  */

void print_rev(char *s)
{
	int len = 0;
	char *c = s;

	while (*c)
	{
		len++;
		c++;
	}

	while (len >= 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}
}
