#include "main.h"

/**
 * string_toupper  - changes all lowercase of a string to uppercase.
 * @str: string passed.
 * Return: pointer to converted string
 */

char *string_toupper(char *str)
{
	int loop;

	for (loop = 0; str[loop] != '\0'; loop++)
	{
		if ((str[loop] >= 97 && str[loop] <= 122))
		{
			str[loop] = str[loop] - 32;
		}
	}
	return (str);
}
