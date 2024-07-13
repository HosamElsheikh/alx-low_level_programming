#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: The number of chars
 */
int _strlen_recursion(char *s)
{
	int total = 0;

	if (*s == '\0')
	{
		return (total);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
