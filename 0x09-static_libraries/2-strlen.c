#include "main.h"
/**
  * _strlen - entry point of a program.
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

	return (count);
}
