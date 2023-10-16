#include "main.h"

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
