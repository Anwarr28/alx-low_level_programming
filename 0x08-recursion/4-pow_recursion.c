#include "main.h"

/**
  * _pow_recursion - calculate the value of a number
  *		raised to the power of another.
  * @x: the base number
  * @y: the power value
  *
  * Return: the value of x to the power of y or -1 if y < 0.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
