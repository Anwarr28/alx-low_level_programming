#include "main.h"

/**
  * create_array - creates an array of chars,
  *		and intialzes it with a specific cahr.
  * @size: the size of the array.
  * @c: the char to initialize with.
  *
  * Return: a pointer to the array / a NULL if size = 0 or it fails.
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
