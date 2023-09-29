#include "main.h"
/**
  * prime_num - checks for a prime number.
  *
  *@n: parameter to be checker for a prime.
  *
  *@num: parameter to check again n.
  *
  *Return: returns 1 if prime and 0 if not.
  */
int prime_num(int n, int num)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n % num == 0)
	{
		return (0);
	}
	else if (num * num > n)
	{
		return (1);
	}
	return (prime_num(n, num + 1));
}

/**
  *is_prime_number - checks for prime.
  *
  *@n: parameter to check for prime.
  *
  *Return: return prime number.
 */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
