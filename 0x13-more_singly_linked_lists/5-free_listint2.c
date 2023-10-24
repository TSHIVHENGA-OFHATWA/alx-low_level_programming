#include "lists.h"

/**
 * free_listint2 - that frees a listint_t list.
 * @head: the pointer to a pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return;

	while ((*head) != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
