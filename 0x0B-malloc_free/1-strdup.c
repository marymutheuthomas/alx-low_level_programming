#include"main.h"

/**
 * _strdup - function to malloc string to duplicate
 * @str: string to duplicate
 * Return: return pointer to duplicated str
 */

char *_strdup(char *str)
{
	unsigned int length;
	char *new_memory;
	unsigned int i;
	
	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
        new_memory = (char *)malloc(sizeof(char) * length);
        i = 0;

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

