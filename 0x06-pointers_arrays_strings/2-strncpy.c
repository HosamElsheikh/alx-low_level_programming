#include "main.h"

/**
 * _strncpy - copies a string into another one
 * @dest: Main string
 * @src: The other string
 * @n: Number of bytes to copy
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
