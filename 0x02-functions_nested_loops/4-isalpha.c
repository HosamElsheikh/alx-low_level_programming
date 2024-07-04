#include "main.h"

/**
 * _isalpha - Checks for alphabets
 *
 * Return: 1 on success
 * otherwise returns 0
 *
 * @c: The char to check
 */

int _isalpha(int c)
{
		if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
