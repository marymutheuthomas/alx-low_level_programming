#include"main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of char
 * @size: size of the array
 * @c: char to add
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *new_memory = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (new_memory == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new_memory[i] = c;
	}
	return (new_memory);
}

