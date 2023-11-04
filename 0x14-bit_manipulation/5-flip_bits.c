#include "main.h"
/**
  * flip_bits - flip the different bits between two numbers.
  *
  *@n: integer to compare bits with.
  *
  *@m: integer to compare bits with.
  *
  *Return: Number of bits to flip.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;

	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
