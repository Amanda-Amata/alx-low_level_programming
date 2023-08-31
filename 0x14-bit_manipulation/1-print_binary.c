#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary numbers
 * @n: function takes long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int val = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int num = 1;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & val) != 0)
		{
			num = 0;
			_putchar('1');
		}
		else if (!num)
		{
			_putchar('0');
		}
		val >>= 1;
	}

	if (num)
	{
		_putchar('0');
	}
}
