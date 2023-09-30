#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point of a C program.
  *
  *@argc: argument count.
  *
  *@argv: pointer to array of strings.
  *
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int res;

	res = 0;
	if (argc > 1)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
