#include "main.h"
#include <string.h>
/**
  * _strspn - get length of a prefix substring
  *
  *@s: string to examine.
  *
  *@accept: substring to examine from s.
  *
  *Return: returns number of occurence of accept from s.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
	unsigned int elem;
	unsigned int len_s = strlen(s);
	unsigned int len_a = strlen(accept);
	unsigned int count = 0;

	if (len_s != 0 || len_a != 0)
	{
		for (index = 0; index < len_s; index++)
		{
			for (elem = 0; elem < len_a; elem++)
			{
				if (s[index] == accept[elem])
				{
					count++;
					break;
				}
			}
			if (elem == len_a)
			{
				break;
			}
		}
	}
	else
		return (0);
	return (count);
}
