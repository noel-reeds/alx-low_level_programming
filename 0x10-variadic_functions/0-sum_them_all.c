#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums the args passed.
  *
  *@n: number of args.
  *
  *Return: Returns 0 if n=0 or sum if n>0.
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int m;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;

		va_start(args, n);
		for (m = 0; m < n; m++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
