#include "main.h"
/**
* print_alphabet_x10 - entry point of a program.
*
*Return: Returns 0 for success.
*/
void print_alphabet_x10(void)
{
	char alpha;
	int i;
	
	for (i = 0; i <= 9; i++)
	{

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
