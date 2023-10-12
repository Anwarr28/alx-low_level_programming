#include "main.h"

/**
  * print_most_numbers - print numbers form 0 to 9 but 2, 4
  *
  * Return: return nothing.
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
}
