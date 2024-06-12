#include "hash_tables.h"
/**
 * key_index - generates an index from a key.
 *
 *@key: args key to generate an index.
 *
 *@size: size of array of hash table.
 *
 *Return: An index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size; /*..creates an index..*/
	return (index);
}
