#include "lists.h"

/**
 * print_listint - prints the elements in the list
 * @h: The list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
