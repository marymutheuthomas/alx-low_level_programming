#include"main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dm array of int
 * @width: width of the array
 * @height: height of the array
 * Return - pointer to new allcoated memory
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **new_memory;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	new_memory = (int **)malloc(sizeof(int) * (width + height));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			new_memory[i][j] = 0;
		}
	}
	return (new_memory);
}

