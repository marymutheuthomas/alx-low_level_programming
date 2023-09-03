#include"main.h"
#include<stdio.h>

/**
 * _isaplha - function to check if a character is an alphabet
 * @c: character to check
 * Return: (1) or (0)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

