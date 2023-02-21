#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free a two dimensional grid made by alloc_grid
 * @grid: Address of two dimensional grid
 * @height: height of the grid
 * Return: Nothing
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
