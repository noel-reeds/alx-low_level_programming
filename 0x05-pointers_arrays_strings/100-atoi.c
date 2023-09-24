#include "main.h"
#include <stdio.h>
/**
  * _atoi - converts string to integer.
  *
  *@s: string to be converted to integer.
  *
  *Return: Always 0.
  */
int _atoi(char *s)
{
	int len;
	int elem;
	int index;
	int neg;

	elem = 0;
	neg = 0;
	len = _strlen(s);
	for (index = 0; index <= len; index++)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			elem *= 10;
			elem = elem + (s[index] - '0');
			if (!(s[index + 1] >= '0' && s[index + 1] <= '9'))
			{
				break;
			}
		}
		if (s[index] == '-')
		{
		neg++;
		}
	}
	if (neg % 2 != 0)
	{
		elem = -elem;
	}
	return (elem);
}
/**
  * _strlen - entry point of a program.
  *
  *@s: parameter.
  *
  *Return: returns count.
  */
int _strlen(char *s)
{
	int index;
	int count = 0;

	for (index = 0; s[index] != '\0'; index++)
		count++;

	return (count);
}
