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
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t));
	for (i = 0; i < hash_table->size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
