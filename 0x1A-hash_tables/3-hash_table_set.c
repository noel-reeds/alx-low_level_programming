#include "hash_tables.h"
/**
 * hash_table_set - inserts an element into the hash table.
 *
 *@ht: a hash table.
 *@key: hash item unique key.
 *@value: hash item value.
 *Return: return 1 on success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *hash_node = create_hash_node((char *)key, (char *)value);
	hash_node_t *current_node = ht->array[index];

	if (!current_node)
	{
		ht->array[index] = hash_node;
		return (1);
	}
	else
	{
		if (strcmp(current_node->key, key) == 0)
			ht->array[index] = hash_node;
		handle_collision(ht, index, hash_node);
		return (1);
	}
	return (0);
}
/**
 * create_hash_node - creates a hash table item.
 *
 *@key: hash table item unique key.
 *@value: hash table unique value.
 *Return: return a hash node
 */
hash_node_t *create_hash_node(char *key, char *value)
{
	hash_node_t *hash_node = malloc(sizeof(hash_node_t));

	if (!hash_node)
		return (NULL);
	hash_node->key = malloc(strlen(key) + 1);
	hash_node->value = malloc(strlen(value) + 1);
	hash_node->key = key;
	hash_node->value = value;
	return (hash_node);
}
/**
 * handle_collision - sorts collisions
 *
 *@ht: a hash table.
 *@index: hash node index
 *@node: hash table node.
 */
void handle_collision(hash_table_t *ht, unsigned long index, hash_node_t *node)
{
	hash_node_t *head = ht->overflow_buckets[index];

	if (head)
		ht->overflow_buckets[index] = head;
	head = malloc(sizeof(hash_node_t));
	head->key = node->key;
	head->value = node->value;
	ht->overflow_buckets[index] = head;
}
