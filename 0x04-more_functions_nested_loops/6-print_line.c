#include "main.h"

/**
 * print_line - Print straight line
 *
 * @n: The number of _
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

}
