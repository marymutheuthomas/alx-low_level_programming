#include"main.h"
#include<string.h>


/**
 * _strncat - string cat to a specified lenght
 * @dest: dest to string
 * @src: src string
 * @n: lenght
 * Return: dest
 */ 

char *_strncat(char *dest, char *src, int n)
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
