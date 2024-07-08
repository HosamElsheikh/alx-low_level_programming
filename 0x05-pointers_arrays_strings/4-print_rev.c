#include "main.h"

/**
 * print_rev - prints string reverse
 * @s: The string
 */
void print_rev(char *s)
{
	char *tmp;

	tmp = s - 1;
	while (*s != '\0')
	{
		s++;
	}
	while (s != tmp)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
