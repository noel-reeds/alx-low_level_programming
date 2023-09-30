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
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
