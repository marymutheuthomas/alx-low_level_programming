#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;

	va_start(mylist, n);

	for (i= 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(mylist);
	printf("\n");
}
