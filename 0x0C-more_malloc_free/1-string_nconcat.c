#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - appends a string to another.
  *
  *@s1: dest str.
  *
  *@s2: src str.
  *
  *@n: number of char from s2 to append to s1.
  *
  *Return: Return NULL for failure and s1 for success.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	str = malloc(len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strncat(str, s2, n);
	return (str);
}
