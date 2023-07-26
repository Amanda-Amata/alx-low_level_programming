#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destionation of string
 * @src: source of string
 * @n:number of bytesto be concenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length, i;

	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, dest_length++)
	{
		dest[dest_length] = src[i];
	}
	dest[dest_length] = '\0';
	return (dest);
}
