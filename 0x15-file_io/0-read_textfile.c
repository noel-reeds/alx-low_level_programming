#include "main.h"
/**
  * read_textfile - reads a text file.
  *
  *@filename: file to be read.
  *
  *@letters: number of bytes ato be read.
  *
  *Return: Number of bytes read.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num, nbyte;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nbyte = read(fd, buf, letters);
	if (nbyte == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	num = write(1, buf, nbyte);
	if (num == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (num);
}
