#include "lists.h"

/**
 * add_nodeint - add node in the beginning
 * @head: pointer to the head pointer
 * @n: the field to be added
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->next = *head;
	*head = newNode;
	newNode->n = n;

	if (newNode == NULL)
		return (NULL);

	return (newNode);
}
