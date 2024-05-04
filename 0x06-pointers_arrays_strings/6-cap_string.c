#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * is_separator - the separator of word.
 * @c: the separator
 * Return: The character
 */

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}');
}

/**
 * cap_string - capitalizes all words of string.
 * @str: string
 * Return: A capitalized strings.
 */
char *cap_string(char *str)
{
	int cap_next = 1, i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (is_separator(str[i]))
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
				cap_next = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}

	}
	return (str);
}
