#include "main.h"
/**
  * cap_string - capitalizes every word in a string.
  *
  *@str: string to capitalize.
  *
  *Return: Returns a pointer a capitalized str.
  */
char *cap_string(char *str)
{
	int index;
	int index2;
	char *format = ",;.!?\", (){} \t\n";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; format[index2] != '\0'; index2++)
		{
			if (str[index] == format[index2] &&
					(str[index + 1] >= 'a' && str[index + 1] <= 'z'))
			{
				str[index + 1] = str[index + 1] - 32;
			}
		}
	}
	return (str);
}
