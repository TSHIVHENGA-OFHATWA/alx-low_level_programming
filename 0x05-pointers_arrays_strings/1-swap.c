#include "main.h"

/**
 * swap_int - swap two integers.
 * @a:  parameter passed as int a.
 * @b: paramter passed as int b.
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
