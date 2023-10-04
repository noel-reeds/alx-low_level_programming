#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - duplicates a str.
  *
  *@str: str to duplicate.
  *
  *Return: Always 0.
  */

char *_strdup(char *str)
{
	int len = strlen(str);

	char *dup_str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (dup_str == NULL)
	{
		return (NULL);
	}
		return (_strcpy(dup_str, str));
}

/**
  * _strcpy - copy a str.
  *
  *@dest: copied str.
  *
  *@src: str to copy.
  *
  *Return: Return dest.
  */
char *_strcpy(char *dest, char *src)
{
	char *dest_init = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_init);
}
