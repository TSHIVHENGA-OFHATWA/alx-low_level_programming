#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: destinatination string
 * @src: source string
 * @n: parameter n
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1, len2;

	len1 = _strlen(dest);
	len2 = _strlen(src);

	for (i = 0; i <= len2; i++)
	{
		if (i == n)
		{
			break;
		}
		else
		{
			dest[len1 + i] = src[i];
		}
	}
	return (dest);
}

/**
 * _strlen - find length of the string.
 * @s: pointer to character parameter
 * Return: string's length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
