#include "main.h"
/**
 * rot13 - Function to encode a string using the ROT13 cipher
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	char *p = str;
	int is_upper;
	int base;
	char c;

	while (*p != '\0')
	{
		c = *p;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			is_upper = (c >= 'A' && c <= 'Z');
			base = is_upper ? 'A' : 'a';
			*p = (c - base + 13) % 26 + base;
		}

		p++;
	}

	return (str);
}
