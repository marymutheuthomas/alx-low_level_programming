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
	new_memory = (int **)malloc(sizeof(int) * (height));
	if (new_memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		new_memory[i] = (int *)malloc(sizeof(int) * width);
		if (new_memory[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(new_memory[j]);
			}
			free(new_memory);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			new_memory[i][j] = 0;
		}

	}
	return (new_memory);
}

