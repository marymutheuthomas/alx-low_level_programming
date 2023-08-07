#include"main.h"
#include<string.h>
#include<stdlib.h>

/**
 * _strdup -  pointer to a newly allocated space in memory
 * @str: string to copy from
 *
 * Return:Null
 */

char *_strdup(char *str)
{
	int len;
	char *dup;

	len = strlen(str);
	dup = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (dup != NULL)
	{
		strcpy(dup, str);
	}
	return (dup);
}
