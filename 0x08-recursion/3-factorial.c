#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: input number.
 *
 * Return:  0 or 1 for factoriaL
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
