#include "main.h"

/**
 * _isdigit - check for a digit from 0 to 9.
 * @c: Parameter c passed for the digit.
 *Return: 1 if is a digit and 0 if is otherwise.
 */
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
