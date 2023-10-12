#include "main.h"

/**
 * _isdigit - checks if the char is a digit
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
