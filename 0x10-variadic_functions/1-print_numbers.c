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
	va_list(print);
	unsigned int i;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
