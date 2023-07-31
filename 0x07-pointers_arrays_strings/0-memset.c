#include"main.h"

/**
 * _memset -  function that fill memory with a constant byte
 * @s: pointer to memory area
 * @b: a constant byte
 * @n: bytes of the memory area
 * Return: return to memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
