#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the given index
 * @head: The list
 * @index: The index of the wanted node
 * Return: The node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (i <= index)
	{
		if (i == index)
			return (head);
		else
		{
			i++;
			head = head->next;
			if (head == NULL)
				return (NULL);
		}
	}
	return (head);
}
