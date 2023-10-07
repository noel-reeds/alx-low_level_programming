#include <main.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory in blocks.
  *
  *@nmemb: number of each block.
  *
  *@size: size of each block.
  *
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{

	}
}
