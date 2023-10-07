#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - allocates memory for a grid.
  *
  *@width: width of grid.
  *
  *@height: height of grid.
  *
  *Return: Return a pointer to a grid or NULL.
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(arr[i]);
		}
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
