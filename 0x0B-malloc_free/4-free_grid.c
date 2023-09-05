#include <stdlib.h>
#include"main.h"

/**
 * free_grid -  free up 2dm grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for(;height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
