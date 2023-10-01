#include "main.h"

/**
 * main - finds the largest prime  factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0 for success.
 */

int main(void)
{
	unsigned long int lgst_prime, num;

	lgst_prime = 612852475143;

	for (num = 1; num < lgst_prime; num += 2)
	{
		while ((lgst_prime % 2) == 0 && (lgst_prime != num))
		{
			lgst_prime /= num;
		}
	}
	printf("%lu\n", lgst_prime);
	return (0);
}
