#include"main.h"

/**
 * print_times_table - print n times table
 * @n: max n times table
 * Return: return (0)
 */

void print_times_table(int n)
{
	int i, product, j;

	for (i = 0; i <= n; i++)
	{
		if (n <= 15 && n >= 0)
		{
			for (j = 0; j <= n; j++)
			{
				product = j * i;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (product < 100)
				{
					_putchar(' ');
				}
			}
			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
			}
		_putchar('\n');
		}
	}
}
