#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: parameter passed as integer size.
 */

void print_triangle(int size)
{
	int i, j, k;


	if (size >= 1)
	{
		for (i = 0; i < size ; i++)
		{
			for (j = i; j < size - 1 ; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1 ; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
