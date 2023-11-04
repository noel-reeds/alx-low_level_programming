#include "main.h"
/**
  * get_endianness - det. endianness
  *
  *Return: Returns either little or big endian.
  */
int get_endianness(void)
{
	unsigned int m = 1;
	char *b = (char *)&m;

	if (*b == 1)
		return (1);
	return (0);
}
