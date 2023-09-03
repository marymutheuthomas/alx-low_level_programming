#include"main.h"

/**
 * _memecpy - fucntion to copy from one block of memeory to another
 * @dest: location to copy to
 * @src: where to copy from
 * @n: no of bytes to copy from src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL || src == NULL)
	{
		perror("Memory allocation failed");
		return NULL;
	}
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

