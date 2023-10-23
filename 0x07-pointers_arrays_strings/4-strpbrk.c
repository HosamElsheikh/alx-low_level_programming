#include <stdlib.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *chk;

	while (*s != '\0')
	{
		chk = accept;
		while (*chk != '\0')
		{
			if (*chk == *s)
			{
				return (s);
			}
			chk++;
		}
		s++;
	}
	return (NULL);
}
