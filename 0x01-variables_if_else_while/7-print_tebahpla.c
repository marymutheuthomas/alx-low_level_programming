#include<stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: return (0)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}

