#include"main.h"

/**
 * _memset - to fill a block of memory with a specified value
 * @b: value to be filled with
 * @n: bytes set to fill
 * @s: pointer to where to fill
 * Return: n 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}

