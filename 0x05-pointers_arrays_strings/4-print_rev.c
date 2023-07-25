#include<string.h>
#include"main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i, length_of_str = strlen(s);

	for (i = length_of_str - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
