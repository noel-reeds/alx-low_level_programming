#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints natural numbers to 98.
*
*@n: The parameter to print first.
*
*Return: Returns void.
*
*/
void print_to_98(int n)
{
	for (n = -97; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");
}
