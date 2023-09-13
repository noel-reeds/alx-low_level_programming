#include "main.h"
/**
* _abs - entry point.
*
*@m: The character to print
*
* Return: return 0 always.
*/
int _abs(int m)
{
	if (m < 0)
	{
		int n;

		n = -m;
		return (n);
	}
	else
	{
		return (m);
	}
}
