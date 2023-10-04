#include "main.h"

/**
 * free_grid - 
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	while (i < height) 
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
