#include<string.h>
#include"main.h"

/**
 * _strncat - function to concate 2 strings
 * @dest: pointer to the dest input
 * @src: pointer to the source input
 * Return: dest
 * @n: most number of bytes from source pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}
