#include "3-calc.h"
#include <string.h>
#include <stddef.h>
/**
  * get_op_func - returns a pointer to the operator
  *
  *@s: operator passed as argument.
  *
  *Return: returns a function.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i <= 4; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
