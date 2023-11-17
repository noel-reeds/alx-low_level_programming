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
int _readelf(int args, char *argv[])
{
	int fd, num;

	if (args != 2)
	{
		fprintf(stderr, "%s", "Error: Provide an ELF file\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		fprintf(stderr, "%s", "Error: Failed to open ELF file\n");
	
}
