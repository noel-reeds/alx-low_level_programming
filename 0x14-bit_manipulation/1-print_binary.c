#include "main.h"
/**
  * print_binary - converts integer to binary.
  *
  *@n: integer to be converted.
  *
  */
void print_binary(unsigned long int n)
{
	unsigned long int var = 1;
	int mask, count = 0;

	if (n == 0)
		_putchar('0');
	while (var <= n)
	{
		var = var * 2;
		count++;
	}
	mask = 1 << (count - 1);
	while (mask > 0)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
