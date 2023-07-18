#include"main.h"

/**
 * print_alphabet_x10- print alphabet 10x
 * Return: return (0)
 */

void print_alphabet_x10(void)
{
	int i = 1, j;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar(i);
        	i++;
	}
	return (0);
}
