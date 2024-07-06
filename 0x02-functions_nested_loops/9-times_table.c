#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int results;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			results = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (results < 10)
				{
					_putchar(' ');
				}
			}
			if (results > 9)
			{
				_putchar(results / 10 + '0');
				_putchar(results % 10 + '0');
			}
			else
			{
				_putchar(results + '0');
			}
		}
		_putchar('\n');
	}
}
