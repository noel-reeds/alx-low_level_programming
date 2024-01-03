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
	hash_node_t **array;
	hash_node_t temp;
	/*..create an node of a hash table to be inserted.*/
	hash_node_t *Node = malloc(sizeof(hash_node_t));
	/*..create a linked list for chaining.*/
	hash_node_t *head_ptr = malloc(sizeof(hash_node_t));

	if (!Node)
		return (0);
	/*..assign key and value of Node.*/
	Node->key = key;
	Node->value = value;
	/*..compute an index.*/
	index = key_index(key);
	if (index)
	{
		/*..check if keys are same and update value if False*/
		if (strcmp(ht->array[index]->key, Node->key))
		{
			/*..handle collision.*/
			if (head_ptr)
			{
				/*..iterate thro. the linked list.*/
				temp = head_ptr;
				while(temp->next)
					temp = temp->next;
				temp->next = Node;
				Node->next = NULL;
			}
			Node->value = value;
			head_ptr = Node;
			Node->next = NULL;
		}
		/*..update Node value.*/
		ht->array[index]->value = value;
		return
	}
	/*..insert into the array.*/
	ht->array[index] = Node;
	return (Node);
}
