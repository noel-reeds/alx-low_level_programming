#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - provides a passwd for crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int psswd, r_num;

	/* intialize psswd with decimal eq of 0xad4 */
	psswd = 2772;
	srand(time(NULL));
	while (psswd > 119)
	{
		r_num = (rand() % 119);
		printf("%c", r_num);
		psswd -= r_num;
	}
	printf("%c", psswd);
	return (0);
}
