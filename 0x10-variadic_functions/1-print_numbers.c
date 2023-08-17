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
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(mylist, int);
			printf("%d", num);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(mylist);
	printf("\n");
}

