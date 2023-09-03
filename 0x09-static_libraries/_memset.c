#include"main.h"

/**
 * _memset - function to set a block of memeory with a char
 * @s: pointer to starting point of the mempry location
 * @b: value to set to the memory location
 * @n: number of bytes to set
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	size_t i = 0;

	while (i < n)
	{
		s[i] = b;
	}
	return (s);
}

