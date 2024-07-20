#include "main.h"

/**
 * strtow - splits a string into words
 * @str: The string
 * Return: Pointer to array of words
 */
char **strtow(char *str)
{
	char **ret;
	int count = 0, i, j = 0, k = 0;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

	ret = malloc(sizeof(char *) * (count + 2));
	if (ret == NULL)
	{
		return (NULL);
	}

	ret[j] = &str[k];

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '\0';
			j++;
			ret[j] = &ret[i + 1];
		}
	}
	ret[j + 1] = '\0';
	return (ret);
}
