#include "main.h"

/**
 * _isalpha - return 1 if c is lower or 0 for otherwise
 * Return: always 0 for success
 * @c: parameter
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
