#include "main.h"

/**
 * print_alphabet - print alphabets
 * Return:void
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
