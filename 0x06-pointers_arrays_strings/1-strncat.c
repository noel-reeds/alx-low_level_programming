#include "main.h"
/**
  * _strncat - appends n bytes of src str to dest str.
  *
  *@src: str to append to dest.
  *
  *@n: n bytes of src str to append.
  *
  *@dest: result str after appending.
  *
  *Return: Return a pointer to dest str.
  */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int len;

	len = strlen(dest);
	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[len + m] = src[m];
	}
	dest[len + m] = '\0';
	return (dest);
}
