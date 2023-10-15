#include "main.h"

/**
  * _strcat - appends src str to dest str.
  *
  *@dest: resulting str after appending src.
  *
  *@src: str to be appended to dest str.
  *
  *Return: Return a pointer to dest str.
  */
char *_strcat(char *dest, char *src)
{
	int m;
	int len;
	int len2;

	len = strlen(dest);
	len2 = strlen(src);
	for (m = 0; m < len2; m++)
	{
		dest[len + m] = src[m];
	}
	dest[len + m] = '\0';
	return (dest);
}
