#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print the strings given as args.
  * @separator: the string to be printed between strs.
  * @n: the number of nums to be printed.
  *
  * Return: Nothing.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(print);
	unsigned int i;
	char *str;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
