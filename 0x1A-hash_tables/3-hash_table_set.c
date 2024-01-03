#include "hash_tables.h"
/**
 * hash_table_set - inserts an element into the hash table.
 *
 *@ht: hash table to insert or update.
 *
 *@key: key associated with a value.
 *
 *@value: value associated with key.
 *
 *Return: Always 1 if success or 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index;
	hash_node_t **array, temp;
	hash_node_t *Node = malloc(sizeof(hash_node_t));
	hash_node_t *head_ptr = malloc(sizeof(hash_node_t));

	if (!Node)
		return (0);
	Node->key = key;
	Node->value = value;
	index = key_index(key);
	if (index)
	{
		if (strcmp(ht->array[index]->key, Node->key))
		{
			if (head_ptr)
			{
				temp = head_ptr;
				while (temp->next)
					temp = temp->next;
				temp->next = Node;
				Node->next = NULL;
			}
			Node->value = value;
			head_ptr = Node;
			Node->next = NULL;
		}
		ht->array[index]->value = value;
		return;
	}
	ht->array[index] = Node;
	return (Node);
}
