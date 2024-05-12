#include "main.h"

int is_divisible(int n, int divisor);
/**
 * is_prime_number - checks if a given integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{

	if (n <= 1) 
		return (0);
	else if (n == 2)
		return (0); 
	return (!is_divisible(n, 2));
}

/**
 * is_divisible - checks if n is divisible by any number from 2 to sqrt(n)
 * @n: the number to check
 * @divisor: the current divisor to check
 *
 * Return: 1 if n is divisible by any number from 2 to divisor, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
    if (divisor * divisor > n)
        return 0;
    if (n % divisor == 0)
        return 1;
    return is_divisible(n, divisor + 1);
}
