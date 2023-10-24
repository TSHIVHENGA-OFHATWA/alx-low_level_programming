#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to a pointer of the first node
 * @index: index of the node.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *current, *previous;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	current = *head;
	previous = NULL;
	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
