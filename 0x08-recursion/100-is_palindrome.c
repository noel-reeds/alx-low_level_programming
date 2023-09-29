#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
  * is_palindrome - checks if a string is a palidndrome.
  *
  *@s: string to be checked.
  *
  *Return: returns 1 if palindrome and 0 if not.
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - checks for the str length.
  *
  *@s: parameter to calculate length.
  *
  *Return: returns length of str.
  *
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * check_pal - checks char recursively for palindrome.
  *
  *@s: str to check.
  *
  *@i: iterater.
  *
  *@len: length of string.
  *
  *Return: returns 1 if palindrome and 0 if not.
  */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
