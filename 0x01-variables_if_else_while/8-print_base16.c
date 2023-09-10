#include <stdio.h>
/**
* main - entry point of a C program.
*
*Return: Return o for succes.
*/
int main(void)
{
	int ch;
	char cha;

	ch = 'a';
	cha = 48;
	while (cha <= 57)
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'f')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}

