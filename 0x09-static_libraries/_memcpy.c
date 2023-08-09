#include"main.h"

/**
 * _memcpy - copy block of memory to another src
 * @dest: dest mem location
 * @src: src mem location
 * @n: size from src to dest
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}

