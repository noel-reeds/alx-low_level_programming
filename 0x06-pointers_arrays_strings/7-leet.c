#include "main.h"
/**
  * leet - encodes a string into 1337.
  *
  *@str: str to be encoded.
  *
  *Return: Returns an encoded str.
  */
char *leet(char *str)
{
	int index;
	int index2;
	char *format = "aeotlAEOTL";
	char *formatt = "4307143071";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; format[index2] != '\0'; index2++)
		{
			if (str[index] == format[index2])
			{
				str[index] = formatt[index2];
			}
		}
	}
	return (str);
}
