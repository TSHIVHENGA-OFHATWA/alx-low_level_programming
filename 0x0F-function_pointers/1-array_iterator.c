#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array to be passed.
 * @size: size of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || NULL)
	{
		return;
	}
	for (; size  <  0; s--)
	{
		action(*array);
	}
}
