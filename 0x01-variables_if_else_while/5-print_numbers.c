#include <stdio.h>
/**
* main - entry point of a C program.
*
*Return: Return 0 for success.
*/
int main(void)
{
	int a;
	
	a = 0;
	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
