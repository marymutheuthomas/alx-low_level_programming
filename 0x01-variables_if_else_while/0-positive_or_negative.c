#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
* main - Test whether a rand number outputs(positive, negative or zero value)
* Return: Return (0) 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");

	return (0);
}
