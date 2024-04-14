#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 for same string, 1 for 1st string or -1 for 2nd string.
 */
int _strcmp(char *s1, char *s2)
{
	int loop, equal = 0;

	for (loop = 0; s1[loop] != '\0' || s2[loop] != '\0'; loop++)
	{
		if (s1[loop] != s2[loop])
		{
			equal = 1;
			break;
		}
	}
	if (equal == 1)
	{
		return (s1[loop] - s2[loop]);
	}
	else
	{
		return (s1[loop] - s2[loop]);
	}
	return (0);
}
