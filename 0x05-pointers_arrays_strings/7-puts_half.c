#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: The input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int i, start;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) + 1 / 2;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
