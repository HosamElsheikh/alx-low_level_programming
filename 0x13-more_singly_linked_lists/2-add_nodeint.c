#include "lists.h"

/**
 * add_nodeint - add a node in the beginning
 * @head: The list
 * @n: The number
 * Return: The beginning of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
