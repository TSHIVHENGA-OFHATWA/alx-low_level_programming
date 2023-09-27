#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: parameter x
 * @y: parameter y
 * Return: -1 for error and value of x raised to power of y for success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
