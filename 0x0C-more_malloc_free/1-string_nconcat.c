#include"main.h"
#include<stddef.h>
#include<stdlib.h>
#include<string.h>


/**
 * string_nconcat: allocate new memoryand concate s1 s2
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2 to concate
 * Return: pointer to the newley allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_memory;

	unsigned int len_s1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len_s2 = (s2 == NULL) ? 0 : strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	new_memory = (char *)malloc(len_s1 + n + 1);

	if (new_memory == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(new_memory, s1);
	}
	else
	{
		new_memory[0] = '\0';
	}
	strncat(new_memory, s2, n);

	return (new_memory);
}

