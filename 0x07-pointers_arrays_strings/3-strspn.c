#include"main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s:A pointer to the null-terminated C string to be examined
 * @accept:pointer to null-terminated C string containing a set of characters
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for  (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
