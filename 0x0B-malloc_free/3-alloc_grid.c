#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: parameter passed as width.
 * @height: parameter passed as height.
 * Return: pointer to a dimensional array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	if (grid == NULL)

		return (NULL);
	}
	else
	{
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		else
		{
			for (j = 0; j < i; j++)
				free(grid[i]--);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
	}
}
