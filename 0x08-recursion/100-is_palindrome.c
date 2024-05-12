#include "main.h"
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
	{
		return (1);
	}
	if (*s == *(s + strlen(s) - 1))
	{
		return (is_palindrome(s + 1));
	}
	else
	{
		return (0);
	}
}

