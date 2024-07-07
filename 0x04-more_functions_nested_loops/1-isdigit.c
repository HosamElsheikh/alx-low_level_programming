#include "main.h"

/**
 * _isdigit - Is this a digit?
 *
 * Return: 1 if digit, otherwise 0
 * @c: The number to check
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
