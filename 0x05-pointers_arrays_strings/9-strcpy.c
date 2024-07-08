#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int size;

	while (src[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[size + 1] = '\0';
	return (dest);
}
