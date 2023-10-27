#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *byte;

	byte = (unsigned char *)&number;

	if (byte[0] == 1)
		return (1);
	else
		return (0);
}
