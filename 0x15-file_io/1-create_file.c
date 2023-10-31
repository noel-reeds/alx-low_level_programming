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
int create_file(const char *filename, char *text_content)
{
	int fd, num, nbyte;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	nbyte = read(fd, buf, letters);
	if (nbyte == -1)
	{
		close(fd);
		return (0);
	}
	num = write(fd, buf, nbyte);
	if (num == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (num);
}
