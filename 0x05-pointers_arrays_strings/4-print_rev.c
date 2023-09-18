#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse.
 * @s: string
 */

void print_rev(char *s)
{
	int a, length;
	char string1;

	length = _strlen(*s);

	for (a = 0; a < length/2; a++)
	{
		string1 = *s[a];
		*s[a] = *s[length - 1 - a];
		*s[length - 1 - a] = *s[a];
	}
	_putchar(s[a]);
	_putchar('\n');
}

