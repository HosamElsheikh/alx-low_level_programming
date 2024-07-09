#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: Main string
 * @src: The string to concat
 * @n: The number of bytes
 * Return: New string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0;
	int i;

	while (dest[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[size] = src[i];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
