#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - print the numbers given as args.
  * @separator: the string to be printed between nums.
  * @n: the number of nums to be printed.
  *
  * Return: Nothing.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(print);

	if (separator != NULL)
	{
		va_start(print, n);

		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d%s", va_arg(print, int), separator);
			}
			else
				printf("%d\n", va_arg(print, int));
		}
	}
}