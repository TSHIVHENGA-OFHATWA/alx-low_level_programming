#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 * @s: The parameter passed as character of string.
 * Return: string's length.
 */

int _strlen(char *s)
/*{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
} */
{
	for (;*s != '\0';)
	{
		s++;
	}
	return (s);
}

