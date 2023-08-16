#include"function_pointers.h"
#include<stddef.h>

/**
 * int_index - function to return index of a item
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to function compare
 * Return: Index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
