#include "main.h"

/**
 * _strcpy - It copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len1, len2;

	len1 = _strlen(dest);
	len2 = _strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

/**
 *_strlen - function that returns the length of a string.
 * @s: The parameter passed as character of string.
 * Return: string's length.
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
