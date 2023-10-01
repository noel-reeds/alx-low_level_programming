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
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] == 0 || *argv[i] <= 9)
			{
				sum += 
			}
			else
				printf("Error\n");
			printf("%d\n", sum);
		}
	}
	else
		printf("0\n");
	return (0);
}
