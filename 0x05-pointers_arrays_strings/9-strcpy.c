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
	char *dest_start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest_start;
}
