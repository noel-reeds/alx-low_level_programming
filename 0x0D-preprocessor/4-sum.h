#ifndef SUM
#define SUM

#define SUM(x, y) ((x) + (y))

/**
  * main - computes SUM.
  *
  *Return: returns SUM.
  */

int main(void)
{
	int res, x, y;

	x = 3;
	y = 4;
	res = SUM(x, y);
	return (res);
}
#endif
