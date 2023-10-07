#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees memory previously allocated.
  *
  *@grid: grid to free.
  *
  *@height: height of grid to free.
  *
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
