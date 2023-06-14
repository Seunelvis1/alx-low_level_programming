#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - it  will free 2d array
 * @grid: 2d grid
 * @height: is the height dimension of grid
 * Description: will free memory of grid
 * Return: nothing
 *
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

