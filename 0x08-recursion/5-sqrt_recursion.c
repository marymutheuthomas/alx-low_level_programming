#include"main.h"

/**
 * _sqrt_recursive - helper functioon to search for square root
 * @start: where to start
 * @end: where to stop
 * Return: sqaure root of a number
 */

int _sqrt_recursive(int n, int start, int end)
{
	int mid, square;
	if (start > end)
	{
		return -1;
	}
	mid = start + (end - start) / 2;
	square = mid * mid;
	if (square == n)
	{
		return mid;
	}
	else if (square < n)
	{
		return _sqrt_recursive(n, mid + 1, end);
	}
	else
	{
		return _sqrt_recursive(n, start, mid - 1);
	}
}

/**
 * _sqrt_recursion -  fucntion to find the square root of a number
 * @n: number to find sqroot
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	return _sqrt_recursive(n, 0, n);
}

