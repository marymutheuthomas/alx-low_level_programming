#include"main.h"

/**
 * _strcat - function to concate 2 strings
 * @dest: destination
 * @src: source string
 * Return: 0 or 1
 */

char *_strcat(char *dest, char *src)
{
	int i, length = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}

