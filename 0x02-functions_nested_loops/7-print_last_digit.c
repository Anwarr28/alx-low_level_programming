#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the number which its last digit will be printed.
 *
 * Return: the last digit of the number provided.
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	if (n > 10)
		n = n % 10;
	_putchar(n + '0');
	return (n);
}
