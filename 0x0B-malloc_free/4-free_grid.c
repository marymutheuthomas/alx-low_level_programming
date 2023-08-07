#include"main.h"
#include<stdlib.h>

/**
 * free_grid - frees the memory allocated by the alloc_grid
 * @grid: pointer to the grid array
 * @height: pointer to grid height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}


