#include "main.h"

 /**
  * findRoot - help _square_recursion to find the root using recursion.
  * @n: the number to find its square root.
  * @i: the square root of n.
  *
  * Return: the square root of n or -1 if it does not have a square root.
  */
int findRoot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (findRoot(n, i + 1));
}
/**
  * _sqrt_recursion - find the natural square root of a number.
  * @n: the number to find its square root.
  *
  * Return: the square root of n or -1 if it does not have a square root.
  */
int _sqrt_recursion(int n)
{
	return (findRoot(n, 1));
}


