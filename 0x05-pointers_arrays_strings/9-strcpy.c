#include "main.h"
#include <string.h>

/**
 * _strcpy - It copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
/*{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}*/
{
	int length;

	for (; src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	dest[length] = '\0';
	return (dest);
}

