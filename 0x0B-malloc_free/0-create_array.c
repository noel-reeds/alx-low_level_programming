#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * create_array - creates an array.
  *
  *@size:
  *
  *@c:
  *
  *Return: returns a pointer to an array.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
	free(p);

}

