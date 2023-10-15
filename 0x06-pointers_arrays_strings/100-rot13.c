#include "main.h"
/**
  * rot13 - encodes a string using rot13.
  *
  *@str: str to be encoded.
  *
  *Return: Return a pointer to an encoded str.
  */
char *rot13(char *str)
{
	int index;
	int mn;
	char *format;
	char *formatt;

	format = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	formatt = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (index = 0; str[index] != '\0'; index++)
	{
		for (mn = 0; format[mn] != '\0'; mn++)
		{
			if (str[index] == format[mn])
			{
				str[index] = formatt[mn];
				break;
			}
		}
	}
	return (str);
}
