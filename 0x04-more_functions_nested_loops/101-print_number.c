#include "main.h"
int num_length(int n);

/**
  * print_number - prints an integer.
  * @n: the number to be printed.
  *
  * Return: return nothing.
  */

void print_number(int n)
{
	int len = num_length(n);
	int j = 0, i = 1, a;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	while ((len - 1) != 0)
	{
		i *= 10;
		len--;
	}
	len = num_length(n);
	while (j < len)
	{
		if (j < (len - 1))
		{
			a = num / i;
			_putchar(a % 10 + '0');
			i /= 10;
		}
		else
			_putchar(num % 10 + '0');
		j++;
	}
}

/**
  * num_length - compute a number length.
  * @n: the number to be measured.
  *
  * Return: length of the number.
  */

int num_length(int n)
{
	int len = 1, i = 10;

	if (n < 0)
		n = -n;
	while (1)
	{
		if (n / i > 0)
		{
			len++;
			i *= 10;
			continue;
		}
		else
			break;
	}
	return (len);
}
