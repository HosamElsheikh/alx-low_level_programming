#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in the list
 *
 * @h: pointer to the list
 *
 * Return: size of the element
 */
size_t listint_len(const listint_t *h)
{
	int ctr = 0;

	while (h != NULL)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
