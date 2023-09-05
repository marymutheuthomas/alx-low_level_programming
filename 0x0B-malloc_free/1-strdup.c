#include"main.h"

/**
 * _strdup - function to malloc string to duplicate
 * @str: string to duplicate
 * Return: return pointer to duplicated str
 */

char *_strdup(char *str)
{
	unsigned int length = strlen(str);
	char *new_memory = (char *)malloc(sizeof(char) * length);
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		new_memory[i] = str[i];
	}
	new_memory[length] = '\0';
	return (new_memory);
}

