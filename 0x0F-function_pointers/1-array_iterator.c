#include"function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints array in int & hexdecimal
 * @action: pointer to a function to iterate
 * @array: pointer to the array
 * @size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}

