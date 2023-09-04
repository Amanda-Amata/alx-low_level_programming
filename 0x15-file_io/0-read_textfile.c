#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints
 * @letters:the number of letters it should read and print
 * @filename: pointer to string
 * Return:  actual number of letters it could read and print or 0;
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_written;
    char *buffer = NULL;
    ssize_t bytes_read;

    if (filename == NULL)
    {
        return 0;
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) 
	{
		return 0;
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return 0;
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) 
	{
		close(fd);
		free(buffer);
		return 0;
	}
	
	close(fd);
	free(buffer);
	return bytes_written;
}
