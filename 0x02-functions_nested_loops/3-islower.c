#include"main.h"

/**
 * _islower -  checks for lowercase character
 * Return: return 1 or 0
 * @c: value
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
