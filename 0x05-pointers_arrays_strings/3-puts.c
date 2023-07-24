#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: character being checked
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
