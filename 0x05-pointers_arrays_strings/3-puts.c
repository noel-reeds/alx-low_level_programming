#include "main.h"
/**
* _puts - entry point of a C program.
*
*@str: parameter.
*
*Return: returns void.
*/
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
