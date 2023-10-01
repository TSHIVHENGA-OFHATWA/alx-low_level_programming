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
		if ((src[i] -1) == '\0')
		{
			break;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
