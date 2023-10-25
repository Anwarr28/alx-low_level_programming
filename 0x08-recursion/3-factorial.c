#include "main.h"

/**
  * factorial - calculate the factorial of a given number.
  * @n: the number given.
  *
  * Return: the result of factorial n.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
