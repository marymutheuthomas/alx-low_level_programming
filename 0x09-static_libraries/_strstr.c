#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 * Return: A pointer to the first occurrence of the substring or NULL 
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;
		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return haystack;
		}
		haystack++;
	}
	return NULL;
}

