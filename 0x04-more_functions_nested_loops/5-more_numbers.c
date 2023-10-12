#include "main.h"

/**
  * more_numbers - prints 10 times the numbers form 0 to 14.
  *
  * Return: return nothing.
  */

void more_numbers(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j > 9 ? '1' : j + '0');
			if (j > 9)
			{
				a = j % 10;
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
