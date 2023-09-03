#include"main.h"

/**
 * _strcpy - function to copy from src to dest
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!dest || !src)
		return (NULL);
	while (*src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

