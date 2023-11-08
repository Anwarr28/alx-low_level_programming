#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  *			on each element of a array.
  * @array: an array of integers.
  * @size: the size of the array given.
  * @action: a pointer to the function to be executed.
  *
  * Return: Nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
