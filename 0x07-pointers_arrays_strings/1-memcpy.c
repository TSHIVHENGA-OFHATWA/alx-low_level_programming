#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		i++;
	}
	*dest = '\0';

	return (dest);
}
