#include "main.h"
#include <string.h>
/**
  * _memcpy - copies the memory area.
  *
  *@dest: memory area to copy to.
  *
  *@src: memory area to copy from.
  *
  *@n: number of bytes.
  *
  *Return: Returns a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
