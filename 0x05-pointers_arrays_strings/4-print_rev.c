#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse.
 * @s: string
 */

void print_rev(char *s)
{
	int a, length;

	length = _strlen(s);

	for (a = length - 1; a >= 0; a--)
	{
		_putchar(s[a]);
		if (*s == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}

/**
 *_strlen - function that returns the length of a string.
 * @s: The parameter passed as character of string.
 * Return: string's length.
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
