#include "main.h"
/**
  * create_file - reads a text file.
  *
  *@filename: file to be created.
  *
  *@text_content: str to write to filename.
  *
  *Return: Number of bytes read.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, num, nbyte;
	char *buf;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (0);
	if (text_content == NULL)
}
