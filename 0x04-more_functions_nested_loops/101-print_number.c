#include "main.h"

/**
  * print_number - prints an integer.
  * @n: the number to be printed.
  *
  * Return: return nothing.
  */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	else
		_putchar(num % 10 + '0')
}
