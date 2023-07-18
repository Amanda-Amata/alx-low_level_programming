#include "main.h"

/**
 * main - print alphabets
 * Return: Always 0
 */

/* Function to print the lowercase alphabet followed by a new line*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
_putchar('\n');
}
