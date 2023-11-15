#include "main.h"
/**
  * cp_file_from_file_to- copies file_from to file_to.
  *
  *@file_from: file to copy from.
  *
  *@file_to: file to copy to.
  *
  *Return: Always 1 on success and -1 on error.
  */
int cp_file_from_file_to(char *file_from, char *file_to)
{
	int fd, nbyte, m, argc = 0;
	char buf[1024];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	nbyte = write(fd, buf, 1024);
	m = close(fd);
	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (nbyte);
}
