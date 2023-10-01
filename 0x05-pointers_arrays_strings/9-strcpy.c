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
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] == sizeof(dest))
		{
			break;
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
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
