#include "hash_tables.h"
#include <stdio.h>
/**
 * create_ht_item - creates a hash table item.
 *
 *@key: hash table key.
 *
 *@value: hash table value
 *
 *Return: hash table item pointer.
 */
ht_item* create_ht_item(char* key, char* value){
	ht_item* item = (ht_item*) malloc(sizeof(ht_item));
	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(value) +1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return item;
}
/**
 * create_table - creates a hash table.
 *
 *@size: size of hash table.
 *
 *Return: returns a hash table on success.
 */
HashTable* create_table(int size){
	HashTable* table = (HashTable*) malloc(sizeof(HashTable));
	table->size = size;
	table->count = 0;
	table->items = (ht_item**) calloc(table->size, sizeof(ht_item*));

	for (int i = 0; i < table->size; i++) {
		table->items[i] = NULL;
	}
	table->overflow_buckets = create_overflow_buckets(table);
	return table;
}
/**
 * free_item - frees memory allocated from heap.
 *
 *@item: hash table item
 *
 * Return: always void
 */
void free_item(ht_item* item){
	free(item->key);
	free(item->value);
	free(item);
}
/**
 * free_table - frees a hash table structure.
 *
 *@table: a hash table
 *
 *Return: returns void
 */
void free_table(HashTable* table){
	for (int m = 0; m < table->size; m++){
		ht_item* item = table->items[i];
		if (item)
			free(item);
	free_overflow_buckets(table);
	free(table->items);
	free(table);
	}
}
/**
 * print_table - display the index, key, and value for each item
 *
 *@table: a hash table.
 *
 * Return: returns void.
 */
void print_table(HashTable* table){
	for (int m = 0; m < table->size; m++){
		if (table->items[i])
			printf("index: %d\n, key: %s\n, value: %s\n", 
					i, table->items[i]->key, table->items[i]->value);
	}
}

