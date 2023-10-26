#include "main.h"

/**
  * checkPrime - check for prime numbers
  * @n: the number to be checked.
  * @i: the number to check with.
  *
  * Return: 0 if the number is not a prime or 1 if it is.
  */
int checkPrime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (checkPrime(n, i + 2));
}

/**
  * is_prime_number - check if a number is a prime.
  * @n: the number to be checked.
  *
  * Return: 1 if the n is a prime or 0 otherwise.
  */
int is_prime_number(int n)
{
	if ((n % 2 == 0 && n != 2) || n < 2)
		return (0);
	return (checkPrime(n, 3));
}
