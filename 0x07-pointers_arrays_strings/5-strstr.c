#include "main.h"
#include <string.h>

/**
 * *_strstr - locates a substring
 * @haystack: the first pointer
 * @needle: the substring pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (;*haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
