#include "main.h"

/**
  * print_array - prints n elements of an array of ints.
  * @a: the array.
  * @n: the number of element to be printed.
  *
  * Return: Nothing.
  */

void print_array(int *a, int n)
{
	if (n <= 0)
		printf("\n");

	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
}
