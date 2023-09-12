#include "main.h"
/**
* _islower = entry point into the program.
*
*@c: The character to print
*
*Return: Return 1 for lower case and 0 for uppercase.

*@c: The character to print.
*/
int _islower(int c)
{

	if (c < 'a' || c > 'z')

		return (0);

	else
		return (1);
}
