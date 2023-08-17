#include <stdarg.h>
#include<stdio.h>
#include<stddef.h>
/**
 * print_numbers - function to print numbers
 * @separator: separate numbers
 * @n: size of the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			num = va_arg(mylist, int);
			printf("%d", num);
			printf(", ");
		}
	}
	printf("\n");
}

