#include "main.h"
/**
  * _strlen - sorts the len of a string.
  *
  *@s: parameter.
  *
  *Return: returns count.
  */
int _strlen(char *s)
{
	int index;
	int count = 0;

	for (index = 0; s[index] != '\0'; index++)
		count++;

	return (count);::
}
