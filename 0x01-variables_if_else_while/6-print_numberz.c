#include <stdio.h>
/**
 * main - print deciaml 0-10
 * Return: retunr (0)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
