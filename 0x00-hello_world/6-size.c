#include <stdio.h>
/**
 * main - entry point of a C program.
 *
 * Return - Returns 0 for success..
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
