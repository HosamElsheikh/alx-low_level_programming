#include "main.h"

/**
 * puts_half - prints only one half
 * @str: The string to print its half
 */
void puts_half(char *str)
{
	int size = 0;
	int n;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		n = size / 2;
	}
	else
	{
		n = (size + 1) / 2;
	}
	while (n < size)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
