#include "main.h"

/**
 * rev_string -  function that prints a string, in reverse.
 * @s: string
 */

void rev_string(char *s)
{
	int a, length, b;

	char hold = s[0];

	length = _strlen(s);

	for (a = 0,b = length - 1; a < b ; a++, b--)
	{
		hold = s[a];
		s[a] = s[b];
		s[b] = hold;
	}
}

/**
 *_strlen - find length of the string.
 * @s: parameter passed as a string.
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
