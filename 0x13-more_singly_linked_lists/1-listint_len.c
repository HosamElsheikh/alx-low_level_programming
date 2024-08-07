#include "lists.h"

/**
 * listint_len - returns the number of elements in the list
 * @h: The list
 * Return: The number of elements
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
