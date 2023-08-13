#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main- a program that prints its name
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;
	char *prog_name;
	char *backslash;

	prog_name = argv[i];
	backslash = strrchr(prog_name, '/');

	if (backslash)
	{
		prog_name = backslash + 1;
	}
	printf("Program name is :%s", prog_name);
	putchar('\n');

	return (0);
}

