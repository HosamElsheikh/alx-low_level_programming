#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: The 2D grid
 * @height: Its height
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
