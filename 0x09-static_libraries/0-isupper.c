#include "main.h"

/**
 * _isupper - checks if the character is upper case
 * @c: The character
 *
 * Return: On uppercase 1.
 * Otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
