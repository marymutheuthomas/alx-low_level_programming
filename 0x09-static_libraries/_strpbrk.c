#include"main.h"

/**
 * _strpbrk - used to find the first occurrence of any character
 * @s: string to search from
 * @accept: characters to be used for comparison
 * Return: 1 or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		char *next = accept;

		while (*next != '\0')
		{
			if (*s == *next)
			{
				return (s);
			}
			next++;
		}
		s++;
	}
	return (NULL);
}

