#include "main.h"

/**
 * _print_rev_recursion - print string in reverse followed bt new line.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s +  1);
		_putchar(*s);
	}
}
