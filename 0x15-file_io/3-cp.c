#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - handles errors
 * @from: file to copy from
 * @to: file to copy to
 * @argv: char arguemnt
 * Return: void
 */

void error_file(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies content of a file to another file
 * @argc:number of arguments
 * @argv:array of pointers to the arguments
 * Return: 0 on success;
 */

int main(int argc, char *argv[])
{
	int to, from, err_close;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_file(from, to, argv);
	nchars = 1024;
	while ((nchars = read(from, buffer, sizeof(buffer))) > 0)
	{
		nchars = read(from, buffer, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(to, buffer, 1024);
			if (nwr == -1)
				error_file(0, -1, argv);
	}
	if (nchars == -1)
	{
		error_file(-1, 0, argv);
	}

	err_close = close(from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	err_close = close(to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
