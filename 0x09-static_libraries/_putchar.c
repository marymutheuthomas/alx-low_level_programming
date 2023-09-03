#include<unistd.h>
#include"main.h"

/**
 * _putchar - function to sent character to stdout
 * @c: character to print
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

