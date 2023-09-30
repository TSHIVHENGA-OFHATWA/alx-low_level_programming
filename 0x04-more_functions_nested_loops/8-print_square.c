#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: parameter passed as integer size.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
