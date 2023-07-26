#include"main.h"
#include<string.h>

/**
 * puts_half - printf second half of a string literal
 * @str: the string
 */

void puts_half(char *str)
{
	int length =  strlen(str);
	int midpoint = (length + 1) / 2;
	int i;

	for (i = midpoint; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

