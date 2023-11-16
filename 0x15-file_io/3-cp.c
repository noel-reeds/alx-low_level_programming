#include "main.h"
/**
  * main - copies file_from to file_to.
  *
  *@argc: argument count.
  *
  *@argv: argument array.
  *
  *Return: Always 1 on success and -1 on error.
  */
int main(int argc, char *argv[])
{
	int fd, fd2, m, n;
	char buf[BUF_SIZE];
	int nbyte;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd2 = open(argv[1], O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	while ((nbyte = read(fd2, buf, BUF_SIZE)) > 0)
		if (write(fd, buf, nbyte) != nbyte)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	if (nbyte == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	if (m == -1 || n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (nbyte);
}
