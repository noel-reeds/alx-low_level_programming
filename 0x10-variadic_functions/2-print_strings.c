#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - prints a str.
  *
  *@separator: separates strings.
  *
  *@n: number of strings.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int m;
	va_list args;

	va_start(args, n);
	for (m = 0; m < n; m++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");

}
