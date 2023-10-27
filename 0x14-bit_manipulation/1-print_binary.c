#include "main.h"
/**
  * print_binary - converts integer to binary.
  *
  *@n: integer to be converted.
  *
  */
void print_binary(unsigned long int n)
{
	while (n)
	{
		if (n & 1)
			_putchar('1');
		if (n == 0)
			_putchar('0');
		n = n >> 1;
	}
}
