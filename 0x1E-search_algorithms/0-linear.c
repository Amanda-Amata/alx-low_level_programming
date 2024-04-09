#include "search_algos.h"

/**
 * linear_search - searches for for an element in  an array
 * of int using linear search algos
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: desired element
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
