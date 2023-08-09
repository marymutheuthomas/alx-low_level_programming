#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strncpy - copies n length of string from src
 * @dest: dest to copy string to
 * @src: src to copy string from
 * @n: lenght from src
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, length;

	length = strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}

