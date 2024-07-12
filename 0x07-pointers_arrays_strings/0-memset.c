#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: The array
 * @b: THe letter
 * @n: number of bytes
 * Return: pointer to s array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
