#include <stdio.h>
/**
* main - entry point of a C program.
*
*Return: Return 0 for success.
*
*/
int main(void)
{
	int d1, d2;
	int d3, d4;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 9; d2++)
		{
			for (d3 = 0; d3 < 10; d3++)
			{
				for (d4 = 1; d4 < 10; d4++)
				{
					putchar((d1 % 10) + '0');
					putchar((d2 % 10) + '0');
					putchar(' ');
					putchar((d3 % 10) + '0');
					putchar((d4 % 10) + '0');

					if (d1 == 9 && d2 == 8 && d3 == 9 && d4 == 9)
					continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
