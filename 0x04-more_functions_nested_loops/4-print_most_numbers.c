#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number == 50 || number == 52)
		{
			continue;
			number++;
		}
		_putchar(number);
	}
	_putchar('\n');
}
