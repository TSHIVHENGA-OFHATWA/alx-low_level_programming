#include "main.h"

int helper(int n, int square);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:the number to find the square root of
 *
 * Return: the square root or -1 if it doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (helper(0, n));
}


/**
 * helper - Finds the square root of a number
 * @n: The number to find the square root of
 * @square: The square number
 *
 * Return: The square root of n if found, otherwise -1
 */
int helper(int n, int square)
{
	if (n * n == square)
		return (n);
	else if (n > square / 2)
		return (-1);
	return (helper(n + 1, square));
}
