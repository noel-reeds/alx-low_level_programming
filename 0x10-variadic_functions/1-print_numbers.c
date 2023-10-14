#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - print numbers passed.
  *
  *@separator: pointer to str between numbers.
  *
  *@n: number of integers passed.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int m;
	va_list args;

	va_start(args, n);
	for (m = 0; m < n; m++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
