#include <stdio.h>
/**
 * Main - The entry point of a C program.
 *
 * Return - Returns the sizes of various types of data types.
 */
int main(void)
{
	float f;
	long long int d;
	long int c;
	char b;
	int i;

	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
