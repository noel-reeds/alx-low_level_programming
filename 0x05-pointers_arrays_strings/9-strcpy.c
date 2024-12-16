#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * _strcpy - copies a string from *src to *dest.
  *
  *@dest: pointer to the destination buffer
  *
  *@src: pointer to the source buffer
  *
  *Return: Pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int m;

	m = 0;
	while (*(src + m) != '\0')
	{
		*(dest + m) = *(src + m);
		m++;
	}
	*(dest + m) = '\0';
	return (dest);
}
