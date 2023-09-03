#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main program to calculate minimum coins for change
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int coins = 0, amount, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (amount >= cents[i])
		{
			amount -= cents[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
