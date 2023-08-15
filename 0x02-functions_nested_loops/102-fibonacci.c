#include<stdio.h>

/**
 * main - main function
 * Return: return 0;
 */

int main(void);
{
	int i = 0, j = 1, k;

	for (i = 2; i < 50; i++)
	{
		k = i + j;
		i = j;
		j = i;
	}		
	return (0);
}
