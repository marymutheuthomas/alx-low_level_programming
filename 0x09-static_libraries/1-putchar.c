#include<unistd.h>

/**
 * _putchar - function to print a single character
 * @c: a char to output
 * Return: return (a)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

