#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints in STDOUT
 * @filename: file being read
 * @letters: number of letters read or printed
 * Return: 0 if null or does not open
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_name;
	ssize_t readfile;
	ssize_t writefile;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_name = open(filename, O_RDONLY);
	if (file_name == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	readfile = read(file_name, buffer, letters);
	if (readfile == -1)
	{
		close(file_name);
		return (0);
	}
	
	writefile = write(STDOUT_FILENO, buffer, readfile);
	free(buffer);
	if (readfile != writefile)
		return (0);
	return (writefile);
}
