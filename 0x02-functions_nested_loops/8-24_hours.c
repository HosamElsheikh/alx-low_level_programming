#include "main.h"

/**
 * jack_bauer - Print every minute
 */
void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');

		}
	}
}
