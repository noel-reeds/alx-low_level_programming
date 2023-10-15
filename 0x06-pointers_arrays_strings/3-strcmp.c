#include "main.h"
/**
  * _strcmp - compares elements of s1 and s2.
  *
  *@s1: str to compare.
  *
  *@s2: str to compare.
  *
  *Return: Return an integer.
  */
int _strcmp(char *s1, char *s2)
{
	int m, n;
	int len = strlen(s1);
	int len2 = strlen(s2);

	for (m = 0, n = 0; m < len || n < len2; m++, n++)
	{
		if (s1[m] != s2[n])
		{
			return (s1[m] - s2[n]);
		}
	}
	return (0);
}
