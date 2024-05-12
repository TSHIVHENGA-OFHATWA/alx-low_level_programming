#include "main.h"

/**
 * _strlen_recursion - print length of the string.
 * @s: the string that I need length of.
 *
 * Return: strong length or 0 for NULL.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
