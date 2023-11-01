#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers and
 * initializes to 0
 * @width: The width (number of columns) of the grid
 * @height: The height (number of rows) of the grid
 *
 * Return: A pointer to the allocated 2-dimensional array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int*) * height);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[0] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
				free(ptr);
				return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
