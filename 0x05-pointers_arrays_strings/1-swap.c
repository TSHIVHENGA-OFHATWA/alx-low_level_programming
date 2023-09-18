#include "main.h"

/**
 * swap_int - swap two integers.
 * @a: first argument
 * @b: second argument
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
