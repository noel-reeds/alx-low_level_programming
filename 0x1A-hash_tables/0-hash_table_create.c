#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 *@size: size of the hash table.
 *
 *Return: Returns a hash table struct.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	return (hash_table);
}
