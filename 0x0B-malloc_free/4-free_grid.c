#include "main.h"

/**
 * free_grid - array
 * @grid: int1
 * @height: int2
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
