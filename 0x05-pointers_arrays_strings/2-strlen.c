#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: The string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != NULL)
	{
		i++;
		s++;
	}
	return (i);
}
