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
	int i, length;

	length = 0;
	i = 0;

	while (dest[i++])
	{
		length++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[length++] = src[i++];
	}
	return (dest);
}
