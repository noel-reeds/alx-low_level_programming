#include <stdio.h>
/**
* main - entry point of C program.
*
*Return: Return 0 for success.
*/
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
