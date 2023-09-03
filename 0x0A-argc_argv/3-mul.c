#include <stdlib.h>
#include<stdio.h>

/**
 * main - main program
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int result, i = 0;

	while (i < argc)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		result = atoi(argv[1]) * atoi(argv[2]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}

