#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: ponter to filename
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int num_letters;
	int file_txt;
	int rwr;

	if (!filename)
		return (0);

	file_txt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_txt == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	rwr = write(file_txt, text_content, num_letters);

	if (rwr == -1)
		return (-1);
	close(file_txt);
	return (1);
}
