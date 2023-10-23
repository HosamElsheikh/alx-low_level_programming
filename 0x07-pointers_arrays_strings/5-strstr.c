#include <stdlib.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int subl;
	char *h;

	subl = 0;
	while (needle[subl] != '\0')
	{
		subl++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (*needle == haystack[i])
		{
			h = haystack + i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] == *h)
				{
					h++;
				}
				else
				{
					break;
				}
			}
			if (j == subl)
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
