#include "main.h"
#include <stdio.h>

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
	while (s[i] != '\0')
	{
		i++;
	}
	_putchar(s[i]);
	i--;
	_putchar('\n');
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
