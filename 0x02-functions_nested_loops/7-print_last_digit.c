#include "main.h"

/**
 * print_last_digit - writes the last digit
 * @n: The number
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int last_d;
	char r;

	last_d = n % 10;
	if (n < 0)
	{
		last_d *= -1;
	}
	r = last_d + '0';
	_putchar(r);
	return (last_d);
}
