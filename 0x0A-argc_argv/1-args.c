#include <stdio.h>

/**
  * main - entry point of a C program.
  *
  *@argc: argument count.
  *
  *@argv: pointer to array of strings.
  *
  *Return: Always 0
  */
int main(int argc, char **argv[])
{
	char __attribute__ ((unused)) myargv = **argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
