#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  * str_concat - concatenates a str.
  *
  *@s1:
  *
  *@s2:
  *
  *Return: Always 0
  */
char *str_concat(char *s1, char *s2)
{
	char *combined = "";
	int len;
	int len2;

	if (s1 == NULL && s2 == NULL)
	{
		return (combined);
	}
	else if (s1 == NULL)
	{
		len2 = strlen(s2);
		combined = malloc((sizeof(char) * (len2)) + 1);
		strcpy(combined, s2);
		return (combined);
	}
	else if (s2 == NULL)
	{
		len = strlen(s1);
		combined = malloc((sizeof(char) * (len)) + 1);
		strcpy(combined, s1);
		return (combined);
	}
	else
	{
	len = strlen(s1);
	len2 = strlen(s2);
	combined = malloc((sizeof(char) * (len + len2)) + 1);
	if (combined != NULL)
	{
		strcpy(combined, s1);
		strcat(combined, s2);
		return (combined);
	}
	else
		return (NULL);
	}
}
