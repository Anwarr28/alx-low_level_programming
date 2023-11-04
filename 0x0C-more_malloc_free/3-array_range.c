#include "main.h"

void simple_print_buffer(int *buffer, unsigned int size);
/**
  * array_range - creates an array of integers.
  * @min: the smallest number to begin with.
  * @max: the largest  number to end with.
  *
  * Return: an array of ints. NULL if max < min or malloc fails.
  */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;

	if (max < min)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min < max + 1; min++, i++)
		arr[i] = min;
	return (arr);
}
