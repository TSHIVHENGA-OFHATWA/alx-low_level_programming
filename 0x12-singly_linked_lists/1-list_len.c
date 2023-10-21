#include "lists.h"

/**
 * list_len -returns the number of elements in a linked list_t list
 * @h: header pointing to the first node.
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int length = 0;
	const list_t *mover;

	mover = h;
	if (h == NULL)
		return (0);

	for (; mover != NULL; mover = mover->next)
	{
		if (mover->str == NULL)
		{
			length++;
		}
		else
		{
			length++;
		}
	}
	return (length);
}
