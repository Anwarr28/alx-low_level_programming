#include "main.h"

/**
  * print_line - draws staight line in the terminal.
  * @n: the length of the line.
  *
  * Return: return nothing.
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n && n > 0; i++)
	{
		_putchar('_');
	}
	if (n <= 0 || n == i)
		_putchar('_');
}
