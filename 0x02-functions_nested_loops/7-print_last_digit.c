#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: input number as an integer
 * Return: last digit.
 */

int print_last_digit(int num)
{
	int last_d;

	l = num % 10;
	if (last_d < 0)
	{
		_putchar(-last_d + 48);
		return (-last_d);
	}
	else
	{
		_putchar(last_d + 48);
		return (last_d);
	}
}
