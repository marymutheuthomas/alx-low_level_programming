#include"main.h"
#include<string.h>

/**
 * _strncpy - function to copy text from dest to src
 * @dest: variable to copy to
 * @src: variable to copy from
 * @n: size to utilize
 * Return: return (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, length;

	length = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[length + i] = '\0';
		i++;
	}
	return (dest);
}

