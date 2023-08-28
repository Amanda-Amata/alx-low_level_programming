#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h:elements in a linked listint_t list
 * Return: count of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
