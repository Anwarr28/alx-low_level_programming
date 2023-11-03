#include "main.h"

/**
  * free_grid - frees 2D grid.
  * @grid: the 2D array to be freed.
  * @height: the rows of the array given.
  *
  * Return: Nothing.
  */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
