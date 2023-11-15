#include "main.h"
/**
  * append_text_to__file - appends text to a file.
  *
  *@filename: file to append to.
  *
  *@text_content: str to be appended.
  *
  *Return: Always 1 on success and -1 on error.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len2 = 0, nbyte = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
