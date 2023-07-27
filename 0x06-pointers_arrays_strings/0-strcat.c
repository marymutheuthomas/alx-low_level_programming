#include<string.h>
#include"main.h"
#include<stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int length = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	putchar('\0');
	return (dest);
}

