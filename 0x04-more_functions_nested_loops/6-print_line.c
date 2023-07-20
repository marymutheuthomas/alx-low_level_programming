#include"main.h"

/**
 * print_line -  function to print a straight line
 * Return: no return type
 * @n - number of times to draw the line
 */

void print_line(int n)
{
	int i = 0;
	 if ( n < 0)
	 {
		 _putchar('\n');
	 }
	 else{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	 }
}

