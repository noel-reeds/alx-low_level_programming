#include "main.h"
/**
  * swap_int - swaps the value of integers.
  *
  *@a: Parameter to swap.
  *
  *@b: Parameter to swap
  *
  *Return void.
  */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
