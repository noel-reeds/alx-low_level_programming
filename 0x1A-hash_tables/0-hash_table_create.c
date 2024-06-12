#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 *@size: size of hash table.
 *
 *Return: returns a hash table pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t *));
	if (!hash_table->array)
		return (NULL);
	for (m = 0; m < hash_table->size; m++)
	{
		hash_table->array[m] = 0;
	}
	return (hash_table);
}
