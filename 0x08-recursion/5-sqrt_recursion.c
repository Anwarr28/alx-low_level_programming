#include "main.h"

/**
  * findRoot - find the root of n.
  * @n: the number to find its square.
  * @i: the root of n.
  *
  * Description: this function find the root of n using recursion.
  * Return: the root of n or -1 or n has no root.
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
 * _sqrt_recursion - use findRoot to find root.
 * @n: the number to find its root.
 *
 * Return: the same return of find root.
 */
int _sqrt_recursion(int n)
{
	return (findRoot(n, 1));
}
