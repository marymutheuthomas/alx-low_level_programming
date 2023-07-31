#include"main.h"

/**
 * _strchr - function to find char in a string
 * @s: pointer to string s
 * @c: charater to locate
 * Return: return pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
