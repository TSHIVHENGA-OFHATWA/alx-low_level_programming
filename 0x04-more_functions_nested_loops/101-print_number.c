#include "main.h"

/**
 * print_number -  prints an integer.
 * @n: parameter passed as integer n.
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	else if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}
