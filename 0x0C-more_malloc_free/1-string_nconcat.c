#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of chars from s2
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0;
	int i, j = 0;
	char *ret;

	if (s1 == NULL)
	{
		s1 = "";
	}
		if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
		while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
	{
		n = size2;
	}
	ret = malloc(sizeof(char) * (size1 + n + 1));
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ret[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		ret[j] = s2[i];
	}
	ret[j] = '\0';
	return (ret);
}
