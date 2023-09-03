#include"main.h"

/**
 * _strspn - function to determine the length of the initial segment in accept
 * @s: string to search from
 * @accept: what to look for
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t length = 0;

	while (*s != '\0')
	{
		char *temp_accept = accept;

		while (*temp_accept != '\0')
		{
			if (*s == *temp_accept)
			{
				length++;
				break;
			}
			temp_accept++;
		}
		if (*temp_accept == '\0')
		{
			break;
		}
		s++;
	}
	return (length);
}

