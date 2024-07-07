#include "main.h"

/**
 * _isupper - Checks for uppercase
 *
 * Return: 1 if uppercase else 0
 * @c: The character
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
