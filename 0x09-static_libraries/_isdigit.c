#include"main.h"

/**
 * _isdigit - checks if its a digit
 * @c: digit to check
 * Return: return 1 or 0
 */

int _isdigit(int c)
{
	if  (c >= 48 && c <= 57)
		return (1);
	return (0);
}

