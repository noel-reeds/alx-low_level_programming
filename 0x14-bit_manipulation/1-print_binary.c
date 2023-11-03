#include "main.h"
/**
  * print_binary - converts integer to binary.
  *
  *@n: integer to be converted.
  *
  */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int var = 0;

	temp = n;
	if (n == 0)
		_putchar('0');
	while ((temp >>= 1) > 0)
		var++;
	while(var >= 0)
	{
		if ((n >> var) & 1)
			_putchar('1');
		else
			_putchar('0');
		var--;
	}
}
