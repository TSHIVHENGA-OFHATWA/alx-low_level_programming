#include "main.h"

/**
 * is_prime_number - checks if a given integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int loop;

	if (n <= 1) 
		return (0);
	for (loop = 2; loop * loop <= n; loop++)
	{
		if (n % loop == 0) 
			return (0); 
	}
	return (1); 
}

