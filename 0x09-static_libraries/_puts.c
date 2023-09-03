#include"main.h"

/**
 * _puts - function to print string to stdout
 * @s: string to Print
 * Return: return string
 */

void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

