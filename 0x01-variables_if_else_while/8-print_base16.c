#include<stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: return (0)
 */

int main(void)
{
	char value = '0';

	while (value <= '9')
	{
		putchar(value);
		value++;
	}
	value = 'a';
	while (value <= 'f')
	{
		putchar(value);
		value++;
	}
	putchar('\n');

	return (0);
}
