#include"main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: embers of the array
 * @size: size of the array
 * Return: pointer to the new allocvated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *my_array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	my_array = malloc(nmemb * size);
	if (my_array == NULL)
	{
		return (NULL);
	}
	memset(my_array, 0, nmemb * size);
	return (my_array);
}

