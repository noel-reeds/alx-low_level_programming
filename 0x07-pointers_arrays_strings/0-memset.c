#include "main.h"
#include <stdlib.h>
/**
  * _memset - fills memory with a constant byte.
  *
  *@b: byte to fill memory.
  *
  *@n: number of bytes.
  *
  *@s: array of string
  *
  *Return: Returns a pointer to the memory area s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}
	return (s);
}
