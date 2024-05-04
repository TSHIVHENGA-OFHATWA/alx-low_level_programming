#include "main.h"

/**
 * cap_string - capitalizes all words of string.
 * @str: string
 * Return: A capitalized strings.
 */
char *cap_string(char *str)
{
	int loop = 0;

	while (str[loop])
	{
		while (!(str[loop] >= 97 && str[loop] <= 122))
			loop++;
		if (str[loop - 1] == ' ' ||
		str[loop - 1] == '\t' ||
		str[loop - 1] == '\n' ||
		str[loop - 1] == ',' ||
		str[loop - 1] == '.' ||
		str[loop - 1] == '?' ||
		str[loop - 1] == '"' ||
		str[loop - 1] == '(' ||
		str[loop - 1] == ')' ||
		str[loop - 1] == '{' ||
		str[loop - 1] == '!' ||
		str[loop - 1] == '' ||
		str[loop - 1] == 't' ||
		loop == 0)
			str[loop] -= 32;
		loop++;


	}
	return (str);
}
