#include "main.h"

/**
 * _print_rev_recursion - print the string in reverse
 * @s: The string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
