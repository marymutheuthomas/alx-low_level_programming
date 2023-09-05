#include"main.h"

/**
 * str_concat - function to concatenate 2 strings in new memory
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int length_s1;
	unsigned int length_s2;
	unsigned int total_len;
	char *new_memory;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	total_len = (length_s1 + length_s2);
	new_memory  = (char *)malloc(sizeof(char) * (total_len + 1));
	if (new_memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_s1; i++)
	{
		new_memory[i] = s1[i];
	}
	for (i = 0; i < length_s2; i++)
	{
		new_memory[length_s1 + i] = s2[i];
	}
	new_memory[total_len] = '\0';
	return (new_memory);
}
