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
	/*char *ptr = s;*/

	while (n > 0)
	{
		*dest = *src;
		n--;
	}
	*dest == '\0';

	return (dest);
}
