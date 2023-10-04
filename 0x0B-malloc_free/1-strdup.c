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
	size_t len = strlen(str);
	char *dup_str = malloc(sizeof(len + 1));

	if (dup_str != NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(dup_str, str);
	}
	return (dup_str);
}
