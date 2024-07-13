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
	total++;
	s++;
	_strlen_recursion(s);
}
