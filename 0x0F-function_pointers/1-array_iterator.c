#include "function_pointers.h"

/**
  * array_iterator - iterates through array.
  *
  *@array: array to be actioned.
  *
  *@size: size of the array
  *
  *@action: pointer to the function you need to use.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
