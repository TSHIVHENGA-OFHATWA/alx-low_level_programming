#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the header pointing to the first node.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *new_node = head;

		head = head->next;
		free(new_node->str);
		free(new_node);
	}
}
