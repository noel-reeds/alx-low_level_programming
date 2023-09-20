#include "main.h"
/**
* _puts - entry point of a C program.
*
*@str: parameter.
*
*Return: returns void.
*/
void puts_half(char *str)
{
	int index;
	int max_str;
	int n;

	max_str = _strlen(str) -1;
	if (max_str % 2 != 0)
	{
		n = (max_str - 1) / 2;
		for (index = max_str - n; index <= max_str; index++)
		{
			_putchar(str[index]);
		}
	}
	else
	{
		for (index = max_str / 2; index <= max_str; index++)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
/**
  * _strlen - entry point of a program.
  *
  *@s: parameter.
  *
  *Return: returns count.
  */
int _strlen(char *arr)
{
	int index;
	int count = 0;

	for (index = 0; arr[index] != '\0'; index++)
		count++;

	return (count);
}
