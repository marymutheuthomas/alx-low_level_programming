#include"variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: string to be printed between numbers
 * @n:number of items to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int item;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && index != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	return (0);
}
