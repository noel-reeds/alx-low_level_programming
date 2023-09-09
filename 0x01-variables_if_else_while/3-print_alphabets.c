#include <stdio.h>
/**
* main - entry point of all C programs.
*
*Return: Return 0 for sucess.
*/
int main(void)
{
	int ch;
	int cha;

	ch = 'a';
	cha = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
