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
	char *dest_init = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_init);
}
