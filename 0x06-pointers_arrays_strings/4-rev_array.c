#include "main.h"
#include <stdio.h>
/**
  * reverse_array - reverses a str.
  *
  *@a: pointer to integer array to reverse.
  *
  *@n: number of elements in the array.
  */
void reverse_array(int *a, int n)
{
	int d, m;
	int temp;

	for (m = n - 1, d = 0; d <= (n / 2); d++, m--)
	{
		temp = a[d];
		a[d] = a[m];
		a[m] = temp;
	}
}
