#include "main.h"
/**
 * reverse_array - reverses the content of array of integers.
 * @a: array
 * @n: number of array
*/

void reverse_array(int *a, int n)
{
	int temp, loop;

	for (loop = 0; loop < n / 2; loop++)
	{
		temp = a[loop];
		a[loop] = a[n - 1 - loop];
		a[n - 1 - loop] = temp;
	}
}
