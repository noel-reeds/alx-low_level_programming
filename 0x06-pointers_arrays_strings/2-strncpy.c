#include "main.h"
/**
  * _strncpy - copies n bytes of src to dest str.
  *
  *@dest: result str after copy.
  *
  *@src: str to be copies to dest str.
  *
  *@n: number of bytes of src str to copy to dest.
  *
  *Return: Return a dest str pointer.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	for (; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}
