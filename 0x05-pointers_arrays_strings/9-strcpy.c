#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * _strcpy - copies a string from *src to *dest.
  *
  *@dest: parameter to copy to.
  *
  *@src: parameter to copy from.
  *
  *Return: Always 0
  */
char *_strcpy(char *dest, char *src)
{
	printf("%s\n", strcpy(dest, src));
	return (0);
}
