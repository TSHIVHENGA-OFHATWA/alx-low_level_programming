#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: parameter passed as integer size.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 1)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = i; j < i; j++)
			{
				_putchar('#');
			}
			_putchar(' ');
			_putchar('\n');
		}
	}
	else 
	{
		_putchar(10);
	}
}
