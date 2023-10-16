#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: The string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	for (; *s != '\0'; s++)
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		--i;
	}
	_putchar('\n');
}
