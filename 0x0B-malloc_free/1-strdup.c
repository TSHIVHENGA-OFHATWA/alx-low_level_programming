#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: parameter passed as char str
 * Return: pointer to copy of the string
 */


char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0, length = 0;

	s = malloc(sizeof(char) * (i + 1));

	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (length = 0; length <= i; length++)
		{
			s[length] = str[length];
		}
	}
	return (s);
}

