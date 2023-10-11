#include "function_pointers.h"

/**
  * print_name - prints a name.
  *
  *@name: name of person.
  *
  *@f: funtion pointer to a char name.
  *
  *Return: print_name returns void.
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
