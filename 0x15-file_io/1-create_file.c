#include "main.h"
/**
  * create_file - creates a file.
  *
  *@filename: file to be created.
  *
  *@text_content: str to write to filename.
  *
  *Return: Number of bytes read.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len2 = 0, nbyte = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len2 = strlen(text_content);
		nbyte = write(fd, buf, len2);
	}
	if (nbyte == -1)
		return (-1);
	close(fd);
	return (nbyte);
}
