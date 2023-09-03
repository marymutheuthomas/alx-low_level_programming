#include"main.h"

/**
 * _strncpy - function to copy n length osrc to dest
 * @dest: where to copy to
 * @src: n length to copy from 
 * @n: length of n from src to cpy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0;src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
