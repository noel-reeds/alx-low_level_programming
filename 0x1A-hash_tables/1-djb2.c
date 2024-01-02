#include "hash_tables.h"
/**
 * hash_djb2 - hashing algorithm
 *
 *@str: str passed for hashing.
 *
 *Return: Returns a hash code.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int m;
	unsigned long index;

	while ((m = *str++))
	{
		if (str[m])
			index = ((index * 33) + str[m]);
	}
	return (index);
}
