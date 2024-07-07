#include "main.h"

/**
 * print_line - Print straight line
 *
 * @n: The number of _
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
		int i;


	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
}
