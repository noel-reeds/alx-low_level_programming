#include "main.h"
/**
* _isalpha - entry point for a program.
*
* @c: The character to print
*
* Return: 1 for lowercase or uppercase and 0 for otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
