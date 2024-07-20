#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: Minimum number
 * @max: Maximum number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ret;

	if (min > max)
	{
		return (NULL);
	}
	ret = malloc(sizeof(int) * (max - min + 1));
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		ret[i] = min;
		min++;
	}
	return (ret);
}
