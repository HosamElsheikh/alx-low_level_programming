#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints up to 98
 *
 * @n: The starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		do {
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		} while (n <= 98);
		printf("\n");
	}
	else if (n > 98)
	{
		do {
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		} while (n >= 98);
		printf("\n");
	}
}
