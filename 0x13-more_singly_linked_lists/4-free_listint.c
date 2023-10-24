#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the pointer pointint to first node
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *ptr;

	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
}
