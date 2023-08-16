#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"

/**
 * print_name - print name as is and as uppercase
 * @name: pointer to the address where the anem is stored
 * @f: pointer to the function return void char type data
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

