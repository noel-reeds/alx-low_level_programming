#include "main.h"
/**
* puts2 - prints every other character of a string.
*
*@str: parameter.
*
*Return: returns void.
*/
void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
