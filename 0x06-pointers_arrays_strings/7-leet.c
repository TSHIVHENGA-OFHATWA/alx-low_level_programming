#include "main.h"

/**
 * leet - Encodes a string into "1337" (leet speak)
 * @str: The string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i;
	char c;
	char *leet_str = malloc(strlen(str) + 1);

	if (leet_str == NULL)
	{
		printf("Memory allocation failed.\n");
		exit(1);
	}

	strcpy(leet_str, str);

	for (i = 0; leet_str[i] != '\0'; i++)
	{
		c = leet_str[i];

		if (c == 'a' || c == 'A')
			leet_str[i] = '4';
		else if (c == 'e' || c == 'E')
			leet_str[i] = '3';
		else if (c == 'o' || c == 'O')
			leet_str[i] = '0';
		else if (c == 't' || c == 'T')
			leet_str[i] = '7';
		else if (c == 'l' || c == 'L')
			leet_str[i] = '1';
	}
	return (leet_str);
}
