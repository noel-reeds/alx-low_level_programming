#include <stdio.h>
/**
 * Main - The entry point of a C program.
 *
 * Return - Returns the sizes of various types of data types.
 */
int main(void)
	int i;
	char c;
	long int l;
	long long int d;
	float f;
{
	puts("Size of a int: %lu byte(s)", sizeof(i));
	puts("Size of a char: %lu byte(s)", sizeof(c));
	puts("Size of a long int: %lu byte(s)", sizeof(l));
	puts("Size of a long long int: %lu byte(s)", sizeof(d));
	puts("Size of a float: %lu byte(s)", sizeof(f));
	return (0);
}
