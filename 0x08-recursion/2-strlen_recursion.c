#include "main.h"
#include <string.h>
/**
  * _strlen_recursion - outputs length of a string.
  *
  *@s: string to output its length.
  *
  *Return: returns length of string.
  */
int _strlen_recursion(char *s)
{
	int len = strlen(s);

	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	return (len);
}

