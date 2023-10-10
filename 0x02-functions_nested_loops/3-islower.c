#include "main.h"

/**
 * _islower - checks whether the character
 * is lower case or not
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * @c: The character to print
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
