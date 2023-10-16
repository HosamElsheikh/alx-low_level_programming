#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}

	_putchar('\n');
}
