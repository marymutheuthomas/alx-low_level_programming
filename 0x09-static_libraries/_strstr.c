#include"main.h"

/**
 * _strstr - function used to find the first occurrence of a substring
 * @haystack: string to search for another string
 * @neddle: string to search for
 * Return: pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
	if (!haystack || !needle)
		return NULL;
	if (*needle == '\0')
	{
		return haystack;
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return haystack;
		}
		haystack++;
	}
	return NULL;
}

