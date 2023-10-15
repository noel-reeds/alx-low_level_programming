#include "main.h"

/**
  * string_toupper - converts a str from lowercase to uppercase.
  *
  *@str: str to covert to upper case.
  *
  *Return: Return a pointer to a str with uppercase.
  */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}
