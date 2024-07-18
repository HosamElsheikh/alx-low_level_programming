#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to the total array
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i, size1 = 0, size2 = 0;


	while (s1[size1] != '\0')
	{
		size1++;
	}
		while (s2[size2] != '\0')
	{
		size2++;
	}

	ret = malloc((sizeof(char) * (size1 + size2 + 1)));

	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ret[i] = s1[i];
	}
	for (i = 0; i <= size2; i++)
	{
		ret[size1] = s2[i];
		size1++;
	}
	return (ret);
}
