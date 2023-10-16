#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: The input string
 *
 * Return: void
 */
void puts2(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;

	while (start < end)
	{
		_putchar(s[start]);
		start += 2;
	}
	_putchar('\n');
}
