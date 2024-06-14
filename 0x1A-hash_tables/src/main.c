#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * main - entry point of a C program.
 *
 */
int main(void){
	char str[] = "Hel";
	unsigned long hash = hash_function(str);
	printf("Hash of %s is %lu\n", str, hash);
	return 0;
}
