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
	FILE *f;

	if (f == NULL)
		return (0);
	int fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	letters = read(fd, &filename, sizeof(letters));
	size_t bytes = write(fd, &filename, sizeof(letters));
	if (bytes == -1)
		return (0);
	close(fd);
	return (0);
}
