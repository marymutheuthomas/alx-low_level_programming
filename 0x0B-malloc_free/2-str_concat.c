#include"main.h"
#include<string.h>
#include<stdlib.h>

/**
 * str_concat -  point to a newly allocated space in memory
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: Null
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_s1;
	size_t len_s2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

