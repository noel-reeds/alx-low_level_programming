#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point of a C program.
  *
  *@argc: number of cents to be passed.
  *
  *@argv: change to be given
  *
  *Return: Always number of coins
  */
int main(int argc, char *argv[])
{
	int num;
	int ncoins;

	ncoins = 0;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num <= 0)
		{
			printf("0\n");
		}
		else if (num >= 25)
		{
			ncoins = num / 25;
			num = num % 25;
		}
		if (num >= 10)
		{
			ncoins = ncoins + (num / 10);
			num = num % 10;
		}
		if (num >= 5)
		{
			ncoins = ncoins + (num / 5);
			num = num % 5;
		}
		if (num >= 2)
		{
			ncoins = ncoins + (num / 2);
			num = num % 2;
		}
		ncoins += num;
		printf("%d\n", ncoins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
