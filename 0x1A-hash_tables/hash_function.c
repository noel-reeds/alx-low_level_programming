#include "hash_tables.h"
#include <stdio.h>
#define CAPACITY 50000 // size of hash table.
/**
 * hash_function - computes hash nodes from keys.
 *
 *@str: char str as keys 
 *
 *Return: returns an index.
 */
unsigned long hash_function(char* str){
	unsigned long i = 0;
	for (int j = 0; str[j]; j++)
		i += str[j];
	printf("ascii value of str: %ld\n", i);
	return CAPACITY % i;
}
