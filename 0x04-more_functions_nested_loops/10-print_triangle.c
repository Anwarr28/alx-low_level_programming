#include "main.h"

/**
  * print_triangle - print a triangle on the terminal
  * @size: the size of the triangle.
  *
  * Return: return nothing
  */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
			_putchar(' ');
		for (; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
