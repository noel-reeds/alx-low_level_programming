#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory.
  *
  *@b: size of memory.
  *
  *Return: Always 0.
  */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
