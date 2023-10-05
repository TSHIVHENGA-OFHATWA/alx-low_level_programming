#include "main.h"

/**
 * malloc_checked - that allocates memory using malloc.
 * @b: paramter passed as unsigned int b.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
