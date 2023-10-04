#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string to be printed.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (*str != '0')
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
