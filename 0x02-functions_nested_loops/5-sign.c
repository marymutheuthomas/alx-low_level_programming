#include"main.h"

/**
 * print_sign -  prints the sign og a number
 * Return: return (1) and (0)
 * @n: a random number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
