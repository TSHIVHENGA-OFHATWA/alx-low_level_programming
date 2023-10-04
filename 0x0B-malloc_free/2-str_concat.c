#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: string concatenated string or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, length, j;

	j = length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		length++;
	}

	s = malloc(sizeof(char) * length);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[j++] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s[j++] = s2[i];
	}
	return (s);
}
