#include "main.h"
#include <stdio.h>
/**
  * print_array - prints elements of an array of an integer.
  *
  *@a: array to be print.
  *
  *@n: parameter to print.
  *
  *Return: Always 0 for success.
  */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d, ", a[num]);
	}
	printf("\n");
}
