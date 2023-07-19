#include"main.h"

/**
 * print_last_digit - function to print last digit
 * @digit: the number to find last digit
 * Return: value of last digit
 */

int print_last_digit(int digit)
{
	int lastDigit;

	if (digit < 0)
		lastDigit = -1 * (digit % 10);
	else
		lastDigit = digit % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}

