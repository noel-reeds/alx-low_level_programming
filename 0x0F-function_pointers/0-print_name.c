#include "function_pointers.h"
#include <stddef.h>

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
	if (name == NULL)
	{
		return;
	}
	f(name);
}
