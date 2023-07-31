#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: destination of memory location
 * @src: source of memory location
 * @n: bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
