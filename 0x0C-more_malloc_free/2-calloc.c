#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory in blocks.
  *
  *@nmemb: number of each block.
  *
  *@size: size of each block.
  *
  *Return: Return pointer to memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
