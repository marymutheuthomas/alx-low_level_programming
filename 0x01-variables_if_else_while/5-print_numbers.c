#include <stdio.h>
/**
 * main - print decimal numbers from 0-10
 * Return: return (0)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');

	return (0);
}
