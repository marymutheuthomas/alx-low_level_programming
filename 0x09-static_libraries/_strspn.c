#include"main.h"
#include<string.h>
#include <stddef.h>

/**
 * _strspn - get the length of a prefix substring consisting of characters from a specified set
 * @s: string to search
 * @accept: set of characters to consider
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	
	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}
	return length;
}

