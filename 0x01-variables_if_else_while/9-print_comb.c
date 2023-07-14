#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: return (0)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0' + ',');
		number++;
	}
	putchar('\n');

	return (0);
}
