#include"main.h"

/**
 * swap_int - swaping values of integers
 * @a: first variables
 * @b: second bariable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
