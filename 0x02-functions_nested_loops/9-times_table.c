#include "main.h"

/**
 * times_table prints the 9 times table, starting with 0
 * Return:void
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r < 10)
			_putchar(' ');
		else
			_putchar((r / 10) + '0');

		_putchar((r % 10) + '0');

		if (j == 9)
		continue;

		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}
