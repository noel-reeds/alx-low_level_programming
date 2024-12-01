#include "main.h"
#include <stdio.h>
/**
  * print_array - prints elements of an integer array.
  *
  *@a: array pointer to be printed.
  *
  *@n: elements in the array
  *
  *Return: Always 0 for success.
  */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
