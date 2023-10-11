#include <stdio.h>
#include "main.h"
void printNum(int i, int j, int n);

/**
  * print_times_table - prints the 9 times table, starting with 0.
  *
  * Return: return nothing.
  */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printNum(i, j, n);
		}
		_putchar('\n');
	}
}

/**
  * printNum - prints the result number
  * @i: the first number
  * @j: the second number
  * @n: the size of the table
  *
  * Return: return nothing
  */

void printNum(int i, int j, int n)
{
	int mult = i * j;

	if (j == 0)
		_putchar('0');
	else
	{
		_putchar(' ');
		if (mult / 100 == 0)
		{
			if (mult / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) % 10 + '0');
				_putchar(mult % 10 + '0');
			}
		}
		else
		{
			_putchar(mult / 100 + '0');
			_putchar((mult / 10) % 10 + '0');
			_putchar(mult % 10 + '0');
		}
	}
	if (j != n)
		_putchar(',');
}
