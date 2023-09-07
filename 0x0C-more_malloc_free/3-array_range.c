#include"main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly allocated array or NULL
 */

int *array_range(int min, int max)
{
	int *my_array;

	if (min > max)
	{
		return (NULL);
	}
	my_array = malloc((max - min + 1) * sizeof(int));
	if (my_array == NULL)
	{
		return (NULL);
	}
	for (; min < max; min++)
	{
		my_array[min - min] = min;
	}
	return (my_array);
}

