#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: The list
 * @n: The data in the new node
 * Return: The list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	while (current_node->next)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;

	return (*head);
}
