#include "main.h"
#include <string.h>

/**
 * print_rev -  function that prints a string, in reverse.
 * @s: string
 */

void print_rev(char *s)
{
	int a, length;

	length = strlen(s);

	for (a = length -1; a >= 0; a--)
	{
		_putchar(s[a]);
		if (*s == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}

