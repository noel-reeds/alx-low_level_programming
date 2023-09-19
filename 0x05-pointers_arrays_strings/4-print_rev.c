#include "main.h"
/**
* _strlen - returns length of string.
*
*@arr: parameter to print.
*
*Return: Always void.
*/
int _strlen(char *arr)
{
	int index;
	int count;

	count = 0;
	for (index = 0; arr[index] != '\0'; index++)
	{
		count++;
	}
	return (count);
}
/**
* print_rev - prints string in reverse.
*
*@s: parameter
*/
void print_rev(char *s)
{
	int index;
	int max;

	max = _strlen(s);
	for (index = max - 1; index >= 0; index--)
	{
	_putchar(s[index]);
	}
	_putchar('\n');
}
