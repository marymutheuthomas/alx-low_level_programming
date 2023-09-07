#include"main.h"
#include<string.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: 1st n of s2
 * Return: pointer to new allocated memeory of concate strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_memory;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	new_memory = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (new_memory == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_memory[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		new_memory[i + j] = s2[j];
	}
	new_memory[i + j] = '\0';
	return (new_memory);
}

