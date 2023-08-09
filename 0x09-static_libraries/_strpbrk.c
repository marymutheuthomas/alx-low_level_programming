#include"main.h"
#include<stddef.h>

/**
 * _strpbrk - find the first occurrence of any character from a set in a string
 * @s: string to search
 * @accept: set of characters to consider
 * Return: pointer to the first occurrence of a character or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *set_ptr = accept;
		while (*set_ptr != '\0')
		{
			if (*s == *set_ptr)
			{
				return s;
			}
			set_ptr++;
		}
		s++;
	}
	return NULL;
}
        
