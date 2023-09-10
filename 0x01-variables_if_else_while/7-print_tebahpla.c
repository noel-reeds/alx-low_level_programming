#include <stdio.h>
/**
*main - entry point for C program.
*
*Return: Returns 0 for success.
*/
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
