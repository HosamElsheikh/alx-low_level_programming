#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: The last digit
 *
 * @n: The full number
 */
int print_last_digit(int n)
{
	int lastDigit;
	char r;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	r = lastDigit + '0';
	_putchar(r);

	return (lastDigit);
}
