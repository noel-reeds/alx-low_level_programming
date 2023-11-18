#include "main.h"

/**
 * _readelf - reads and displays contents of a ELF header.
 *
 *@args: number of arguments.
 *
 *@argv: argument array.
 *
 *Return: ELF file format or exit(98) on error.
 */
int main(int args, char *argv[])
{
	int fd, num2, num;
	char *buff[52];

	if (args != 2)
	{
		fprintf(stderr, "%s", "Error: Provide an ELF file\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		fprintf(stderr, "%s", "Error: Failed to open ELF file\n");
	lseek(fd, 52, SEEK_SET);
	num = read(fd, buff, 52);
	if (num == -1)
	{
		fprintf(stderr, "%s", "Permission denied\n");
		exit(98);
	}
	num2 = write(STDOUT_FILENO, buff, num);
	if (num2 == -1)
	{
		fprintf(stderr, "%s", "Failed to write\n");
		exit(98);
	}
	close(fd);
	return (num2);
}
