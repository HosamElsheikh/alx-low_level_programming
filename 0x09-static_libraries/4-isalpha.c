#include "main.h"

/**
 * _isalpha - checks if the c is an alphabet
 *
 * @c: This is the alphabet to check on
 * Return: On success 1.
 * On error, return 0.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
