#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: The width
* @height: The length
* Return: array of ints
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ret;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	ret = (int **) malloc(sizeof(int *) * height);

	if (ret == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ret[i] = (int *) malloc(sizeof(int) * width);

		if (ret[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(ret[j]);
			}
			free(ret);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ret[i][j] = 0;
		}
	}
	return (ret);

}
