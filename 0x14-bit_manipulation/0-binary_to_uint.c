#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int n = 1;
	size_t length;
	int a;

if (!b)
	return (0);

length = strlen(b);

for (a = length - 1; a >= 0; a--)
{
	if (b[a] != '0' && b[a] != '1')
		return (0);
}
for (a = length - 1; a >= 0; a--)
{
	if (b[a] == '1')
		i += n;
	n *= 2;
}
return (i);
}
