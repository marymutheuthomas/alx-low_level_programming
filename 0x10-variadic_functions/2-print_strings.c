#include"variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @searator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *my_string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		my_string = va_arg(args, char *);
		if (my_string)
		{
			printf("%s", my_string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

