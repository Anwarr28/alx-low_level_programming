#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - calculate the sum of all its parameters.
  * @n: is the number of args given to the func.
  *
  * Return: the sum of all args.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list(args);

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
