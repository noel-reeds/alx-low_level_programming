#include "main.h"
/**
  * print_diagonal - print a diagonal on the terminal.
  *
  *@n: parameter to print.
  *
  *Return: return void.
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int m;
		int b;

		for (m = 0; m < n; m++)
		{
			for (b = 0; b < m; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
