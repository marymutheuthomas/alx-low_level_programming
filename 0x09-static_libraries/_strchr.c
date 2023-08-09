#include"main.h"
#include <stddef.h>

/**
 * _strchr - search for the first occurrence of a specified character
 * @s: string to search from
 * @c: character to return
 * Return:(1) or (0)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0;s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &(s[i]);
		}
	}
	return NULL;
}

