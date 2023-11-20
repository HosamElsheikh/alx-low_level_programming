#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * printNumber - Prints an integer using _putchar.
 * @n: The integer to print.
 *
 * Return: void
 */
void printNumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		printNumber(n / 10);
	}

	_putchar((n % 10) + '0');
}
/**
 * print_listint - Prints the numbers
 *
 * @h: the pointer to the list
 *
 * Return: The size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printNumber(h->n);
		_putchar('\n');
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
