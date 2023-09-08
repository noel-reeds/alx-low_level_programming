#include <stdio.h>
/**
 * Main - The entry point of a C program.
 *
 * Return - Returns the sizes of various types of data types.
 */
int main(void)
	int a;
	char b;
	long int c;
	long long int d;
	float f;
{
	puts("Size of a int: %lu byte(s)", sizeof(a));
	puts("Size of a char: %lu byte(s)", sizeof(b));
	puts("Size of a long int: %lu byte(s)", sizeof(c));
	puts("Size of a long long int: %lu byte(s)", sizeof(d));
	puts("Size of a float: %lu byte(s)", sizeof(f));
	return (0);
}
