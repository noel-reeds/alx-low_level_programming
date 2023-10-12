#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - searches for an integer from an array.
  *
  *@array: array to search integer from.
  *
  *@size: number of elements in the array array
  *
  *@cmp: pointer to the function to be used to compare values.
  *
  *Return: Returns an integer.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int num;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		exit (-1);
	}
	for (i = 0; i < size; i++)
	{
		num = array[i];
		if (num >= 0 || num <= 9)
		{
			if (cmp(num))
			{
				return (i);
			}
		}
	}
	exit (-1);
}
