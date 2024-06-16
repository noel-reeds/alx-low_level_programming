#ifndef HASH_TABLES_H
#define HASH_TABLES_H
/*-----MACROS--------*/
#define CAPACITY 50000

/*----HEADERFILES----*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*----STRUCTS----*/
/**
 * struct ht_item - hash table item.
 *
 *@key: a hash table item unique key.
 *@value: a hash table item value
 */
typedef struct ht_item
{
	char *key;
	char *value;
} ht_item;

/**
 * struct LinkedList - defines a linkedlist structure
 *
 *@item: a hash table item.
 *
 *@next: next node pointer in a linkedlist.
 */
typedef struct LinkedList
{
	ht_item *item;
	struct LinkedList *next;
} LinkedList;

/**
 * struct HashTable - hash table structure.
 *
 *@items: double pointer to hash table items
 *@overflow_buckets: contains collision chain
 *@size: size of hash table
 *@count: number of items in hash table
 */
typedef struct HashTable
{
	ht_item **items;
	LinkedList **overflow_buckets;
	int size;
	int count;
} HashTable;

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **overflow_buckets;
	hash_node_t **array;
} hash_table_t;

/*----PROTOTYPES----*/
ht_item *create_ht_item(char *key, char *value);
HashTable *create_table(int size);
unsigned long hash_function(char *str);
void print_table(HashTable *table);
void free_table(HashTable *table);
void free_item(ht_item *item);
void ht_insert(HashTable *table, char *key, char *value);
LinkedList *allocate_list(void);
LinkedList *linkedlist_insert(LinkedList *list, ht_item *item);
void free_linkedlist(LinkedList *list);
void handle_collision(hash_table_t *ht, unsigned long index, hash_node_t *node);
hash_node_t *create_hash_node(char *key, char *value);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif /*---HASH_TABLES_H---*/
