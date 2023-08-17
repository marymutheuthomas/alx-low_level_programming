#include"variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - function that sum all int arguments
 * @n: size
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int num;
	unsigned int i;
	int sum = 0;

	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(mylist, int);
		sum += num;
	}
	va_end(mylist);
	return (sum);
}

