#include "main.h"
/**
  * _strlen - sorts the len of a string.
  *
  *@s: parameter.
  *
  *Return: returns count.
  */
int _strlen(char *s)
{
	int m, _strlen;

	_strlen = 0;
	for (m = 0; *(s + m) != '\0'; m++)
	{
		_strlen += 1;
	}
	return (_strlen);
}
