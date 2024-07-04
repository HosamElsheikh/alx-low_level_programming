#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: on success: 1
 * 0 if failed
 *
 * @c: The letter to check
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
