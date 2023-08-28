#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: linked list of type listint_t to print
 * Return: elements of listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
