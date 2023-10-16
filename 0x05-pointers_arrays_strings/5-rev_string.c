#include "main.h"

/**
 * rev_string -  function that prints a string, in reverse.
 * @s: string
 */

void rev_string(char *s)
{
	int length, i; 
	char hold;

	length = _strlen(s);

	for (i = 0; i < (length / 2); i++)
	{
		hold = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = hold;
	} 
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
