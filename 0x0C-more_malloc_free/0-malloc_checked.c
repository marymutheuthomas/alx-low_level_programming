#include"main.h"

/**
 * malloc_checked - unction that allocates memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to new memory or status 98
 */

void *malloc_checked(unsigned int b)
{
	void *new_memory;
	
	new_memory = malloc(b);
	if (new_memory == NULL)
	{
		exit (98);
	}
	return (new_memory);
}

