#include "main.h"

/**
 * print_sign - prints the sign of number
 *
 * @n: the number to check
 *
 * Return: 1 for positive
 * return 0: for zero
 * return -1: for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
