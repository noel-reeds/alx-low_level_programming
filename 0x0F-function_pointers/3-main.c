#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point of a program.
  *
  *@args: number of args passed.
  *
  *@argv: argv passed.
  *
  *Return: Always 0.
  */
int main(int args, char *argv[])
{
	int a, b;

	if (args != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	/* when b = 0 for argv[2] = "/" and "%" */
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", (get_op_func(argv[2]))(a, b));
	return (0);
}
