#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * @s: The string
 * @c: The character
 * Return: The character
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}
