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
	int i, j;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
