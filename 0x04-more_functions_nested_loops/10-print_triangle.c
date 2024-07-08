#include "main.h"

/**
 * print_triangle - Makes a traingle
 *
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = size - i; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
