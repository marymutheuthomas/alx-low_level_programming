#include"main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: 1 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
	}
	if (strlen(s1) < strlen(s2))
		return (-1);
	else if (strlen(s1) > strlen(s2))
		return (1);
	return (0);
}

