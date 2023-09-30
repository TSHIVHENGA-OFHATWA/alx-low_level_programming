#include "main.h"

/**
 * print_line - draw a staright line on the terminal.
 * @n: parameter passed as integer n.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n')
	}
}
