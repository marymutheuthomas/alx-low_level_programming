#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * isNumeric - function to check if a string is numeric
 * @str: The string to check
 * Return: true if numeric, false otherwise
 */

bool isNumeric(const char *str)
{
	int i;

	if (str == NULL || *str == '\0')
		return (false);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

/**
 * main - main fucntion to calculate sum
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (!isNumeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
