#include <stdio.h>
#include <string.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: program name
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		char *programName = argv[0];
		char *lastSlash = strrchr(programName, '/');
		if (lastSlash != NULL)
		{
			programName = lastSlash + 1;
		}
		printf("Program name: %s\n", programName);
	}
	return 0;
}

