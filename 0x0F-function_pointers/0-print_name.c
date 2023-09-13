#include"function_pointers.h"
#include<stdio.h>
#include<stddef>

/**
 * print_name - function to print name using function pointer
 * @name: pointer to string to print
 *  @f: function pointer that doesn't return anything
 *  Return: (0) on success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
