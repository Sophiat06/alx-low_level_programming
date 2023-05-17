#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory allocated for grid created by alloc() grid
 * @grid: 2 dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
