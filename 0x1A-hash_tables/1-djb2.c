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
	unsigned long hash_value = 5381;

	while ((m = *str++))
	{
		hash_value = ((hash_value * 33) + m);
	}
	return (hash_value);
}
