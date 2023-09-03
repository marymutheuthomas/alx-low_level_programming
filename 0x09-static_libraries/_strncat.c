#include"main.h"

/**
 * _strncat - fucntion to cat n length of src
 * @dest: string destination
 * @src: source string of n length
 * @n: length of n to concate
 * Return: pointer to dest after concat
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest), i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}

