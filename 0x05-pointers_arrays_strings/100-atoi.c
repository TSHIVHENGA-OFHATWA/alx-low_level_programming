#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer parameter string passed characters
 * Return: the ascii integers
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}

	return (num * sign);
}
