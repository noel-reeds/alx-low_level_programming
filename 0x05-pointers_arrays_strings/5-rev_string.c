#include "main.h"
/**
* _strlen - returns length of string.
*
*@arr: parameter to print.
*
*Return: Always void.
*/
int _strlen(char *arr)
{
	int index;
	int count;

	count = 0;
	for (index = 0; arr[index] != '\0'; index++)
	{
		count++;
	}
	return (count);
}
/**
* rev_string - reverses string.
*
*@s: parameter
*/
void rev_string(char *s)
{
	int index;
	char rev_str[500];
	int rev;

	rev = 0;
	for (index = _strlen(s) - 1; index >= 0; index--)
	{
		rev_str[rev] = s[index];
		rev++;
	}
	rev = 0;
	for (index = 0; index <= _strlen(s) - 1; index++)
	{
		s[index] = rev_str[rev];
		rev++;
	}
}
