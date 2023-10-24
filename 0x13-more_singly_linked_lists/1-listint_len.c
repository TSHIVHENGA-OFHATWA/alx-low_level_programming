#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head pointing to first node
 * Return: number of elements in a linked listint list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
