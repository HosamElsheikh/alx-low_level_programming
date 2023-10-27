#include "main.h"

/**
 * _abs - returns the absolute value
 * @n: The number of operation
 *
 * Return: The absolute value
 */
int _abs(int n)
{
	int absval;

	absval = n;
	if (n < 0)
	{
		absval = n - (n * 2);
	}
	return (absval);
}
