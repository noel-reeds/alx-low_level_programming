#include "main.h"
/**
  * get_bit - returns the value of a it at a given index.
  *
  *@n: integer to det. bit index from.
  *
  *@index: index, starting from 0 of the bit you want to get.
  *
  *Return: the value of the bit at an index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;
	int var;

	num = sizeof(unsigned long int) * 8;
	if (index >= num)
		return (-1);
	var = ((n >> index) & 1);
	return (var);
}
