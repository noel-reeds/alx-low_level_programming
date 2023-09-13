#include "main.h"
/**
* print_last_digit - entry point
*
*@d1: The character to print
*
*Return: Return 0 always.
*/
int print_last_digit(int d1)
{
	int d2 = 0;

	d1 = d2 % 10;
	if (d1 < 0)
	{
		int d3 = -d1;

		return (d3);
	}
	else if (d1 > 0)
	{
		return (d1);
	}
	return (0);
}
