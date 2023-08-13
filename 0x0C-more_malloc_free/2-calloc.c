#include"main.h"
#include<stddef.h>
#include<string.h>
#include<stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of members
 * @size: size of each byte
 * Return: (0)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *myarray = malloc(nmemb * size * sizeof(int));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (myarray == NULL)
	{
		return (NULL);
	}
	memset(myarray, 0, nmemb * size * sizeof(int));
	return (myarray);
}

