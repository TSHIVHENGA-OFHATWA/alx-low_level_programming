#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: argument string
 */

void puts_half(char *str)
{

	int length = _strlen(str);

	if ((length) % 2 == 0)
	{
		length /= 2;
	}
	else 
	{
		length = (length + 1) / 2; 
	}
	for (str += length; (*str != '\0'); str++)
	{
		_putchar(*str);
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
