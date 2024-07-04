#include "main.h"

/**
 * print_sign - Print sign of number
 *
 * Return: 1 if n is positive
 * 0 if n is zero
 * -1 if negative
 *
 * @n: The number to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
