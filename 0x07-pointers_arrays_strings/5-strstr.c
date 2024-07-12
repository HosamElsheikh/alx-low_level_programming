#include <stdlib.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{	char *n = needle;
	char *h;

	while (haystack != '\0')
	{
		if (*haystack == *needle)
		{
			h = haystack;
			while (n != '\0')
			{
				if (*n == *h)
				{
					n++;
					h++;
				}
				else
				{
					break;
				}
				return (haystack);
			}
		}
	}
	return (NULL);
}
