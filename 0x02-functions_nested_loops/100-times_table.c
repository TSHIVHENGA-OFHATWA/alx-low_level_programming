#include "main.h"

/**
 * print_times_table - prints table n times starting from 0.
 * @n: number which the table will be printed.
 */

void print_times_table(int n)
{
	int loop;

	if ((n < 0) || (n > 15))
		return;
	for (loop = 0; loop <= 10; loop++)
	{
		printf("%d x %d = %d\n", loop, n, loop * n);
	}
}

