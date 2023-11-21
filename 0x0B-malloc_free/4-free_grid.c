#include "main.h"

/**
 * free_grid - a program that frees 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: dimension of previously created grid
 * @height: height  of previously created grid
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
