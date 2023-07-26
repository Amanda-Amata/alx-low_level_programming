#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string pointer
 * @src:source of string pointer
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++, dest_len++)
	{
		dest[dest_len] = src[i];
	}
	dest[dest_len] = '\0';
	return (dest);
}
