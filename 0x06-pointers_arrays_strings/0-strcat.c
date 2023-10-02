#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: destination string.
 */
char *_strcat(char *dest, char *src)
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
