#include"main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly allocated array or NULL
 */

int *array_range(int min, int max)
{
	int *my_array, i;

	if (min > max)
	{
		return (NULL);
	}
	my_array = malloc((max - min + 1) * sizeof(int));
	if (my_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		my_array[i] = min;
		min++;
	}
	return (my_array);
}

