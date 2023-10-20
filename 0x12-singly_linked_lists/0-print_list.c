#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: header pointing to the first node.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i, length = 0;

	if (h == NULL)
		return (-1);

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
			length++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			length++;
		}
		h = h->next;
	}
	return (length);
}
