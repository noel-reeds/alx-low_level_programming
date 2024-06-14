#include "hash_tables.h"
/**
 * ht_insert - adds an element to the hash table.
 *
 *@table: a hash table.
 *
 *@key: hash table element unique key.
 *
 *@value: hash table element unique value.
 *
 *Return: returns void.
 */
void ht_insert(HashTable* table, char* key, char* value)
{
	ht_item *item = create_ht_item(key, value);
	unsigned long index = hash_function(key);
	ht_item *current_item = table->items[index];

	if (!current_item)
	{
		if (table->count == table->size)
		{
			printf("Insert Error: Hash table is full\n");
			free_item(item);
			return;
		}
		table->items[index] = item;
		table->count++;
	}
	else if (strcmp(current_item->key, key) == 0)
	{
		strcpy(table->items[index], value);
		return;
	}
	else
	{
		handle_collision(table, index, item);
		return;
	}
}
/**
 * ht_search - searches for a hash table node.
 *
 *@table: a hash table.
 *
 *@key: hash table element unique key.
 *
 *Return: returns a pointer to the searched item.
 */
char *ht_search(HashTable* table, char* key)
{
	unsigned long index = hash_function(key);
	ht_item *item = table->items[index];
	LinkedList *head = table->overflow_buckets[index];

	if (!item)
		return (NULL);
	else 
		if (strcmp(item->key, key) == 0)
			return item->value;
		else
			if (!head)
				return NULL;
			item = head->item;
			head = head->next;
}
/**
 * allocate_list - allocates memory for a linkedlist pointer.
 *
 *Return: returns a pointer to a linkedlist.
 */
LinkedList* allocate_list()
{
	LinkedList *list = malloc(sizeof(LinkedList));
	return list;
}
/**
 * linkedlist_insert - inserts a hash node into a linkedlist.
 *
 *@list: a linkedlist structure.
 *
 *@item: a hash table item to be inserted in a linkedlist.
 *
 *Return: returns a pointer to a newly inserted node.
 */
LinkedList *linkedlist_insert(LinkedList *list, ht_item *item)
{
	if (!list)
	{
		LinkedList *head = allocate_list();
		head->item = item;
		head->next = NULL;
		list = head;
	}
	else if (!list->next)
	{
		LinkedList *node = allocate_list();
		node->item = item;
		node->next = NULL;
		list->next = node;
		return list;
	}
	LinkedList *temp = list;
	while (temp->next->next)
		temp = temp->next;
	LinkedList *node = allocate_list();
	node->item = item;
	node->next = NULL;
	temp->next = node;
	return list;
}
/**
 * linkedlist_remove - removes an item from a linkedlist
 *
 *@list: linkedlist to be removed.
 *
 *Return: returns item of popped element.
 */
ht_item *linkedlist_remove(LinkedList *list)
{
	if (!list || !list->next)
		return (NULL);
	LinkedList *node = list->next;
	LinkedList *temp = list;
	temp->next = NULL;
	list = node;
	ht_item *it = NULL;
	memcpy(temp->item, it, sizeof(ht_item));
	free_item(temp);
	return (it);
}
/**
 * free_linkedlist - frees a linkedlist.
 *
 *@list: a linkedlist to be freed.
 *
 *Return: returns void.
 */
void free_linkedlist(LinkedList *list)
{
	LinkedList *temp = list;
	while (list)
	{
		temp = list;
		list = list->next;
		free_item(temp);
	}
}
/**
 * create_overflow_buckets - creates a linkedlist.
 *
 *@table: a hash table
 *
 *Return: returns linkedlist to hold overflows.
 */
LinkedList **create_overflow_buckets(HashTable *table)
{
	LinkedList **overflow_buckets = calloc(table->size, sizeof(LinkedList*));
	for (int m = 0; m < table->size; m++)
		overflow_buckets[m] = NULL;
	return overflow_buckets;
}
/**
 * free_overflow_buckets - free overflow buckets
 *
 *@table: a hash table
 *
 *Return: returns void
 */
void free_overflow_buckets(HashTable *table)
{
	LinkedList **buckets = table->overflow_buckets;

	for (int m = 0; m < table->size; m++)
		free_linkedlist(buckets[i]);
	free(buckets);
}
/**
 * handle_collision - handles collision.
 *
 *@table: a hash table.
 *
 *@index: a hash table index.
 *
 *@item: a hash table item
 *
 *Return: returns void
 */
void handle_collision(HashTable *table, unsigned long index, ht_item *item)
{
	LinkedList *head = table->overflow_buckets[index];

	if (head == NULL)
	{
		head = allocate_list();
		head->item = item;
		table->overflow_buckets[index] = head;
		return
	}
	else
		table->overflow_buckets[index] = linkedlist_insert(head, item);
		return;
}
/**
 * ht_delete - deletes from the hash table
 *
 *@table: a hash table.
 *
 *@key: ht_item's unique key to be deleted
 *
 *Return: returns void
 */
void ht_delete(HashTable *table, char *key)
{
	unsigned long index = hash_function(key);
	ht_item *item = table->items[index];
	LinkedList *head = table->overflow_buckets[index];

	if (!item)
		return;
	else
		if (!head && strcmp(item->key, key) == 0)
			table->items[index] = NULL;
			free(item);
			table->count--;
			return;
		else if (head)
			if (strcmp(item->key, key) == 0)
				free_item(item);
				LinkedList *node = head;
				head = head->next;
				node->next = NULL;
				table->items[index] = 
					create_item(node->item->key, node->item->value);
				free_linkedlist(node);
				table->overflow_buckets[index] = head;
				return;
			LinkedList *current = head;
			LinkedList *prev = NULL;
			while (current)
				if (strcmp(current->item->key, key) == 0)
					if (!prev)
						free_linkedlist(head);
						table->overflow_buckets[index] = NULL;
						return;
					prev->next = current->next;
					current->next = NULL;
					free_linkedlist(current);
					table->overflow_buckets[index] = head
				current = current->next;
				prev = current;
}
