#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: argument string
 */
void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else
	{
		length = (length - 1) / 2;
	}
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
