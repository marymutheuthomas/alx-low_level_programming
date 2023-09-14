#include"variadic_functions.h"

/**
 * sum_them_all - function to sum all args
 * @n: number of args
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0, arg_item;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		arg_item = va_arg(args, int);
		sum = sum + arg_item;
	}
	return (sum);
}

