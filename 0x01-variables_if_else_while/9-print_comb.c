#include <stdio.h>
/**
* main - entry point of a C program.
*
*Return: Return 0 for success.
*/
int main(void)
{
	int m;

	m = 48;
	while (m <= 57)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
		}
		if (m != 57)
		{
			putchar(' ');
		}
		m++;
	}
	putchar('\n');
	return (0);
}
