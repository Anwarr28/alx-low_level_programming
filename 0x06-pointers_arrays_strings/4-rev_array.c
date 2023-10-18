#include "main.h"

/**
  * reverse_array - reverse the contant of an array of integers.
  * @a: a pointer to the array.
  * @n: number of element of the array.
  *
  * Return: Nothing.
  */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
