#include "main.h"

/**
 * create_array - Creates an array
 * @size: The size of the array
 * @c: The characters of the array
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ret = malloc(size * sizeof(char));
	if (ret == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ret[i] = c;
	}

	return (ret);
}
