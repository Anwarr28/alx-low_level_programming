#include "main.h"

/**
  * alloc_grid - return a pointer to a 2d array of ints.
  * @width: the rows in the array.
  * @height: the colonms of the array.
  *
  * Return: a pointer to a 2d array
  *		null on failure or if width or height is 0 or < 0.
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int) * (width * height));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
