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

	for (index = 0; index < strlen(s); index++)
	{
		for (elem = 0; elem <= strlen(accept); elem++)
		{
			if (s[index] == accept[elem])
			{
				elem++;
			}
		}
	}
	return (elem);
}
