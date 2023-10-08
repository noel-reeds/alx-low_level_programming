#include "main.h"
#include <stdlib.h>

/**
  * array_range - array of integers.
  *
  *@min: minimum integer in array.
  *
  *@max: maximum integer in array.
  *
  *Return:Return an array of integers or NULL.
  */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
