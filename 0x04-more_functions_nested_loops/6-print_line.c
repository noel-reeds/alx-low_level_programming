#include "main.h"
/**
  * print_line - prints a line based on the value of n.
  *
  *@n: The input value.
  *
  *Return: Always void.
  *
  */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	_putchar('\n');
}
