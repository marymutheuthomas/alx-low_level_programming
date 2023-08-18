#include<stdarg.h>
#include<stdio.h>
#include<stddef.h>
#include"variadic_functions.h"
/**
 * print_strings - function to print strings
 * @separator: to separate strings
 * @n:number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;
	char *item;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		item = va_arg(mylist, char *);
		if (item == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", item);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(mylist);
	printf("\n");
}

