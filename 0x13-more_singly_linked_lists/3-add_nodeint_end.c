#include "lists.h"

/**
 * add_nodeint_end - adds a node in the end
 * @head: pointer to the head node
 * @n: value to be added
 *
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode = malloc(sizeof(listint_t));
	listint_t temp;

	if (endNode == NULL)
		return (NULL);

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
