#include "main.h"

/**
 * print_triangle - prints a triangle with a given size
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int rows;
	int cols;
	int spcs;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (spcs = 0; spcs < size - rows; spcs++)
			{
				_putchar(' ');
			}
			for (cols = 0; cols < rows + 1; cols++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
