#include"main.h"
#include<string.h>

/**
 * puts_half - printf second half of a string literal
 * @str: the string
 */

void puts_half(char *str)
{
	int length =  strlen(str);
	int midpoint = length / 2;
	int i;

	for (i = midpoint; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

