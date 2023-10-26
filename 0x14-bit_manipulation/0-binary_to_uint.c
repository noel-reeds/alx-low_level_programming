#include "main.h"
/**
  * binary_to_uint - converts binary to unsigned integer.
  *
  *@b: string of binary characters.
  *
  *Return: Returns a converted integer.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = sum * 2 + (b[i] - '0');
		i++;
	}
	return (sum);
}
