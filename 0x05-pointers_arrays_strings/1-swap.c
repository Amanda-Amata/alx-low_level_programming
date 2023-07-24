#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: swape and store address
 * @b:swape and store address
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
