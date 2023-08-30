#include"main.h"

/**
 * _pow_recursion -  function to find x power y
 * @x: base case
 * @y: power value
 * Return: power of a function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
