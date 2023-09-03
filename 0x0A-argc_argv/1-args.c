#include<stdio.h>

/**
 * main - main fucntion
 * @argc: argument count
 * @argv: argument vector
 * Return: return (0)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}

