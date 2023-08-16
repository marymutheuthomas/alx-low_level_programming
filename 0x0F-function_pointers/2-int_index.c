#include"function_pointers.h"

/**
 * int_index - function to return index of a item
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to function compare
 * Return: Index of the first element for which cmp function does not return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
        int i;

        if (array == NULL && size <= 0 && cmp == NULL)
                return (-1);
        for  (i = 0; i < size; i++)
        {
		if (cmp(array[i]) != 0)
		{
			return i;
		}
	
        }
	return (-1);
}

