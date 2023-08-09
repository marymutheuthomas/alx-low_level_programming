#include "main.h"
#include <stdio.h>

/**
 * _atoi - function to convert string items to int
 * @s: string to convert
 * Return: integer value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return result * sign;
}

