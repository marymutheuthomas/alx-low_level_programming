#include<stdio.h>

/**
 * main - main function
 * Return: return 0
 */

int main(void)
{
	int i = 1, count, j = 2, k;

	for (count = 3; count <=98; count++)
	{
		k = i + j;
		printf(", %d", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}

