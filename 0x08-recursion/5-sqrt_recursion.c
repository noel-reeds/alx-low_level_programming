#include "main.h"

/**
  * calc_sqrt - outputs sqrt.
  *
  *@num: sqrt
  *
  *@n: parameter to find sqrt.
  *
  *Return: return sqrt.
  */

int calc_sqrt(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	if (num * num > n)
	{
		return (-1);
	}
	return (calc_sqrt(n, num + 1));
}

/**
  * _sqrt_recursion - returns sqrt.
  *
  *@n: parameter to check for sqrt.
  *
  *Return: return sqrt.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (calc_sqrt(n, 1));
}
