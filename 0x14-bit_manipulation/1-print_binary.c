#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary
 */

void print_binary(unsigned long int n)
{
	int i, zero = 1;
	unsigned long int mask;

	int bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;

		if (n & mask)
		{
			zero = 0;
			_putchar('1');
		}
		else if (i == 0 || !zero)
		{
			_putchar('0');
		}
	}
}
