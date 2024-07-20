#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: Minimum number
 * @max: Maximum number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *ret;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ret = malloc(sizeof(int) * (size));
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ret[i] = min;
		min++;
	}
	return (ret);
}
