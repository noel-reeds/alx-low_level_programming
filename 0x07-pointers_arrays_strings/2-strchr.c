#include "main.h"
#include <string.h>
/**
  * _strchr - locates a character in a string.
  *
  *@s: string to search character from.
  *
  *@c: character to be checked
  *
  *Return: return NULL if no character in string.
  */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (0);
}
