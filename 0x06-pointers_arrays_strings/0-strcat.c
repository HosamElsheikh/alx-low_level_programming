#include "main.h"
/**
 * _strcat - adds s2 to s1
 * @dest: The first string
 * @src: The string to concat
 *
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	while (dest[length] != '\0')
		length++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
