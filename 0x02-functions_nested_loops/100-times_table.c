#include "main.h"

/**
 * print_number - print a number with proper formatting
 * @num: the number to print
 * Return: void
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar(' ');
	}
	if (num >= 100)
	{
		_putchar(num / 100 + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
	}
	else if (num >= 10)
	{
		_putchar(' ');
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
}

/**
 * print_times_table - print n times table
 * @n: max n times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = j * i;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				print_number(product);
			}
			_putchar('\n');
		}
	}
}

