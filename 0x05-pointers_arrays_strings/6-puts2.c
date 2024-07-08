#include "main.h"

/**
 * puts2 - Every other char printing
 * @str: The string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			i++;
			continue;
		}
		_putchar(str[i]);
		i++;
	}
	_putchar('\0');
}
