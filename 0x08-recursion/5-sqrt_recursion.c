#include "main.h"
#include <math.h>
/**
  * _sqrt_recursion - returns sqrt of a natural number.
  *
  *@n: parameter to find sqrt.
  *
  *Return: return sqrt.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int req = _sqrt_recursion(n - 1);
	if (req * req > n
		 return (req);
	return (req + 1);
}
