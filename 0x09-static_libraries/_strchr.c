#include"main.h"

/**
 * _strchr - function to fincd orccurence of char in a string
 * @s: string to search from
 * @c: character to search for
 * Return: pointer to where the char is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

