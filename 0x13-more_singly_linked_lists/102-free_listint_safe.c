#include "lists.h"

/**
 * free_listint_safe - that frees a listint_t list.
 * @head: the pointer to a pointer
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;

	if (h == NULL || *h == NULL)
		return;

	while ((*h) != NULL)
	{
		ptr = (*h)->next;
		free(*h);
		*h = ptr;
	}
	*h = NULL;
}
