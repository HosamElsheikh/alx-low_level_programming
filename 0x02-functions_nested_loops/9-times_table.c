#include "main.h"

/**
 * times_table - writes the times table
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;
	int result;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			result = row * col;
			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
