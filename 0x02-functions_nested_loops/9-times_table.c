#include <stdio.h>
#include "main.h"
void printNum(int i, int j);

/**
  * times_table - prints the 9 times table, starting with 0.
  *
  * Return: return nothing.
  */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printNum(i, j);
		}
		_putchar('\n');
	}
}

/**
  * printNum - prints the result number
  * @i: the first number
  * @j: the second number
  *
  * Return: return nothing
  */

void printNum(int i, int j)
{
	int n = i * j;

	if (j == 0)
		_putchar('0');
	else
	{
		_putchar(' ');
		if (n / 10 == 0)
		{
			_putchar(' ');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	}
	if (j != 9)
		_putchar(',');
}
