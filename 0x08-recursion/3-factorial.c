#include "main.h"

/**
 * factorial - makes factorial
 * @n: The number to factorial
 * Return: The result of the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
