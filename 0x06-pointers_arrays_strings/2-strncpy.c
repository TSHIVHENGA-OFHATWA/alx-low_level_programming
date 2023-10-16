#include "main.h"
#include <string.h>
/**
 * _strncpy -  copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of element from source string.
 * Return: copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
