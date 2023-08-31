#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number
 * @b: string with elements
 * Return:converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		var <<= 1;

		if (b[i] == '1')
			var += 1;
		i++;
	}
	if (b[i] != '\0')
		return (0);
	return (var);
}
