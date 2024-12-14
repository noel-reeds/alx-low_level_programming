#include "main.h"
#include <stdio.h>
/**
* _strlen - returns length of string.
*
*@arr: parameter to print.
*
*Return: Always void.
*/
int _strlen(char *str)
{
	int m, _strlen;

	_strlen = 0;
	m = 0;
	while (*(str + m) != '\0')
	{
		_strlen += 1;
		m++;
	}
	return (_strlen);
}
/**
* rev_string - reverses string.
*
*@s: parameter
*/
void rev_string(char *s)
{
	int m, n;
	char tmp;

	m = 0;
	n = _strlen(s) - 1;
	while (m < n)
	{
		tmp = *(s + m);
		*(s + m) = *(s + n);
		*(s + n) = tmp;
		m++;
		n--;
	}
	return;
}
