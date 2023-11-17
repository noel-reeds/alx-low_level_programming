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
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}
