#include "main.h"

/**
 * _strcat - concats two strings together
 * @dest: The last string
 * @src: The first string
 * Return: A string of the new concatednated strings
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (*src != '\0')
	{
		dest[n] = *src;
		n++;
		src++;
	}
	dest[n] = '\0';
	return (dest);
}
