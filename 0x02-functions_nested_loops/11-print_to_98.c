#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - print all natural nums form n to 98.
  * @n: the num to begin with
  *
  * Return: nothing will be returned
  */

void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar(98 + '0');
	_putchar('\n');
}
