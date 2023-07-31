#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer with memory address
 * @b: constant byte
 * @n: size of memory location
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
