#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid
 * @grid: Pointer to the 2-dimensional grid
 * @height: The height (number of rows) of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
