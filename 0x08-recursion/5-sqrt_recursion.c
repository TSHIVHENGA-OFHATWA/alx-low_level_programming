#include "main.h"

int helper(int n, int start, int end);
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
	return (helper(n, 1, n));
}


/**
 * helper - Finds the square root of a number
 * @n: The number to find the square root of
 * @start: The start of the range to search
 * @end: The end of the range to search
 *
 * Return: The square root of n if found, otherwise -1
 */
int helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (helper(n, mid + 1, end));
	else
		return (helper(n, start, mid - 1));
}

