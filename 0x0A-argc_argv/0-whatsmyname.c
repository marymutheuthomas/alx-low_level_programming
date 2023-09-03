#include<stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

	printf("%s\n", program_name);
	return (0);
}

