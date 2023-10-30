#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:is the name of the file
 * @text_content:is the NULL terminated string to add at the end of the file
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_txt;
	int num_letters = 0;
	int rwr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num_letters = 0; text_content[num_letters];)
			num_letters++;
	}
	file_txt = open(filename, O_WRONLY | O_APPEND);
	rwr = write(file_txt, text_content, num_letters);
	
	if (file_txt == -1 || rwr == -1)
		return (-1);
	close(file_txt);
	return (1);
}
