#include "main.h"
#include <string.h>

/**
 * *_strchr -  locates a character in a string and returns pointer
 * @s: pointer
 * @c: character to be located
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
