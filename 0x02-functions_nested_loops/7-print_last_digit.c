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

	last_d = n % 10;
	return (last_d);
}
