#include "main.h"

/**
  * puts2 - prints every ohter character of a string.
  * @str: the string to be printed.
  *
  * Return: Nothing.
  */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (*(str + len))
		len++;
	while (i < len)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
