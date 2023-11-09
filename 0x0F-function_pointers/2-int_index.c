#include "function_pointers.h"

/**
  * int_index - searches fo an integer.
  * @array: an array of integers.
  * @size: the size of the array given.
  * @cmp: apointer to a function that takes int and return int
  *		which is used to compare.
  *
  * Return: the index of hte first element for which the cmp fuction
  * 		does nor return 0. -1 if no element matches or size is <= 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
