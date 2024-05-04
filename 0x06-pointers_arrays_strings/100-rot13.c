#include "main.h"
/**
 * rot13 - Function to encode a string using the ROT13 cipher
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
				*ptr += 13;
			else
				*ptr -= 13;
		}
		ptr++;
	}
	return (str);
}
