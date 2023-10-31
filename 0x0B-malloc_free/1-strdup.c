#include <stdlib.h>

/**
 * _strdup - Duplicates a string using dynamic memory allocation
 * @str: The input string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *arr;
	int j;

	if (str == NULL)
		return (NULL);

	size = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	arr = malloc(size);
	if (arr == 0)
		return (NULL);

	for (j = 0; j <= size; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
