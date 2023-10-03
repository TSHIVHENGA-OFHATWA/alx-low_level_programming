#include "main.h"

/**
 * create_array -  creates an array of chars, and
 * initializes it with a specific char.
 * @size: parameter passed as size of the memory to be allocated.
 * @c: parameter passed as characters to be created as array.
 * Return: Arrays of chars or NULL if fails (size = 0)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if ((size == '\0') || (str == '\0'))
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
