#include"main.h"
#include<stdio.h>

/**
 * _abs - checks if a number is absolute or not
 * @c: charater to check
 * Return: Return 1 or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}

