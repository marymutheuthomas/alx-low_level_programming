#include"main.h"
#include<string.h>

/**
 * _memcpy - function to cpy n bytes from src to dest
 * @dest: dest to cpy memory to
 * @src: source dest to copy memory from
 * @n: bytes from memory
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

