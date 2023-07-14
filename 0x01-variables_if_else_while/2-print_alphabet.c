#include<stdio.h>
/**
 * main - putchar alphabet in lower case
 * Return: return 0
 */
int main(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
		putchar(letter);
		letter++;
	}

	return (0);
}

