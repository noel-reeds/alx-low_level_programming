#include "main.h"
/**
* _isupper - entry point to print uppercase.
*
*@c: The parameter to print.
*
* Return: Always returns 0 for success.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
