#include"main.h"
#include<string.h>

/**
 * _strcat - function to concatenate 2 string
 * @dest: destination concatenation
 * @src: source string to concate
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length =  strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}

