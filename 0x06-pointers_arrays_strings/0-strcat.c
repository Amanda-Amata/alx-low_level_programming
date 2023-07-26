#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string pointer
 * @src:source of string pointer
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; dest[dest_len] != '\0'; i++, dest_len++)
	{
		dest[dest_len] = src[i];
	}
	dest[dest_len] = '\0';
	return (dest);
}
