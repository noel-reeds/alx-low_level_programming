#include <stdio.h>
/**
*main - entry point of C programs.
*
*Return: Returns 0 for success.
*/
int main(void)
{
	int ch;

	ch = 48;
	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
