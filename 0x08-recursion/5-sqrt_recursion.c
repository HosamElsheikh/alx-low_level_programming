#include "main.h"

/**
 * sqrt_guess - Makes guesses
 * @n: The number
 * @g: The guess
 * Return: The value of the sqrt
 */
int sqrt_guess(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (-1);
	}
	return (sqrt_guess(n, g + 1));
}

/**
 * _sqrt_recursion - Natural Square root of a number
 * @n: The number
 * Return: The natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_guess(n, 0));
}
