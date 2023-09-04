#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: memory
 * @height: height of grid
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int d = 0;

	for (; d < height; d++)
		free(grid[d]);
	free(grid);
}
