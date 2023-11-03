#include "main.h"
/**
  * clear_bit - clear the bit at a given index.
  *
  *@n: integer to det. bit index from.
  *
  *@index: index of the bit to set to 0.
  *
  *Return: the value of the bit at an index.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = sizeof(unsigned long int) * 8;
	if (index >= num)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
