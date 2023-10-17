#include "main.h"

/**
  * puts_half - print the second half of a string.
  * @str: the string to be printed.
  *
  * Return: Nothing.
  */

void puts_half(char *str)
{
	int len = 0;

	while (*(str + len))
		len++;

	if (len % 2 != 0)
		len = len / 2 + 1;
	else
		len = len / 2;

	while (*(str + len))
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
