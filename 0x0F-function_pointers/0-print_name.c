#include"function_pointers.h"
#include<stdio.h>
#include<stddef.h>

/**
 * myfunction - function to print string
 * @str: string to print
 */

void myfunction(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

/**
 * print_name - function to print name using function pointer
 * @name: pointer to string to print
 *  @f: function pointer that doesn't return anything
 *  Return: (0) on success
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
