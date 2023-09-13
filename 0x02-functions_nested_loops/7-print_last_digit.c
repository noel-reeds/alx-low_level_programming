#include "main.h"
/**
* print_last_digit - entry point
*
*@d1: The character to print
*
*Return: Return d2.
*/
int print_last_digit(int d1)
{
	int d2;

	d2 = d1 % 10;

	if (d2 < 0)
	{
		d2 *= -1;
	}

	_putchar(d2 + '0');

	return (d2);
}
