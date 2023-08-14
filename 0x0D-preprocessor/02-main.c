#include<stdio.h>
#define PRINT_FILE_NAME printf("%s\n", __FILE__)

/**
 * main - function to print program name
 * Return: return (0)
 */

int main(void)
{
	PRINT_FILE_NAME;
	return (0);
}

