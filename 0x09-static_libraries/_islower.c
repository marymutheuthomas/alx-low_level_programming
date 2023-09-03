#include"main.h"
#include<stdio.h>

/**
 * _islower - fucntion to check if a character is lower
 * @c: charcter to check
 * Return: (-1) or (1)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		printf("is lower\n");
		return (1);
	}
	printf("is not lower\n");
	return (0);
}

