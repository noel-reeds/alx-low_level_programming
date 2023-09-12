#include "main.h"
/**
*  _islower = entry point into the program.
*
* Return: Return 1 for lower case and 0 for uppercase.
*
*/
int _islower(int c)
{

	if (c < 'a' || c > 'z')

		return (0);

	else
		return (1);
}
