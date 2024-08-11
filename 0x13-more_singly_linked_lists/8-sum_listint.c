#include "lists.h"

/**
 * sum_listint - sums all data of a list
 * @head: THe list
 * Return: Int of the summation
 */
int sum_listint(listint_t *head)
{
	int summation = 0;

	if (!head)
		return (0);
	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
