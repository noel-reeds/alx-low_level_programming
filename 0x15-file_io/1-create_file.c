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

	if (filename == NULL)
		return(-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len2 = strlen(text_content);
		nbyte = write(fd, text_content, len2);
		if (nbyte == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
