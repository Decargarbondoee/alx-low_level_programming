#include "main.h"

/**
 * free_grid - allocate a grid, make space and free space
 * @grid: take in width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
