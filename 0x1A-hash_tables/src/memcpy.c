#include <stdio.h>
#include <string.h>
/**
 * main - prints size of an array.
 *
 *Return: always 0.
 */
void main (void){
	char src[] = "Hello World!";
	printf("%ld: %ld\n", sizeof(src), strlen(src));
}
