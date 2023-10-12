#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: the number of backslashes to print
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
