#include "main.h"

/**
 * _strdup - Pointer to a copy of a string
 * @str: The string we will copy
 * Return: A pointer to a copied array
 */
char *_strdup(char *str)
{
	char *ret;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	ret = malloc(size * sizeof(char));

	if (ret == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ret[i] = str[i];
	}
	return (ret);
}
